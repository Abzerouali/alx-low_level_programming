#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *is_digit - Checks if a string contains only digit characters.
 *@str: String to be evaluated
 *Return: 0 if a non-digit character is found, 1 otherwise.
 */
int is_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * _strlen - Returns the length of a string.
 * @str: String to be evaluated.
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**errors - Handles errors for the main function.*/
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
*main - Multiplies two positive numbers.
*@argc: Number of arguments.
*@argv: Array of arguments.
*Return: Always 0 (Success).
*/
int main(int argc, char *argv[])
{
	char *str1, *str2;
	int len1, len2, len, i, carry, digit1, digit2, *result, flag = 0;

	str1 = argv[1];
	str2 = argv[2];
	if (argc != 3 || !is_digit(str1) || !is_digit(str2))
		errors();
	len1 = _strlen(str1);
	len2 = _strlen(str2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	i = 0;
	while (i <= len1 + len2)
	{
		result[i] = 0;
		i++;
	}
	len1 = len1 - 1;
	while (len1 >= 0)
	{
		digit1 = str1[len1] - '0';
		carry = 0;
		len2 = _strlen(str2) - 1;
		while (len2 >= 0)
		{
			digit2 = str2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
			len2--;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
		len1--;
	}
	i = 0;
	while (i < len - 1)
	{
		if (result[i])
			flag = 1;
		if (flag)
			_putchar(result[i] + '0');
		i++;
	}
	if (!flag)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
