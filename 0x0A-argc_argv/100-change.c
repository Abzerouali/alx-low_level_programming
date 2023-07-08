#include "main.h"
#include <stdio.h>

/**
 * str_len - Prototype
 * Description: a function calculate the length of a string
 * @s: string
 * Return: len
 */

int str_len(char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

/**
 * _atoi - Prototype function
 * Description: a function thatconverts a string to integer
 * @s: string to convert
 * Return: converted string
 */

int _atoi(char *s)
{
	int con = 0;
	int x = 1;
	int y = 0;
	int z = str_len(s);

	while (s[y] < '0' || s[y] > '9')
	{
		if (s[y] == '-')
			x *= -1;
		y++;
	}
	if (z > y)
	{
		if (x == -1)
		{
			while (s[y] >= '0' && s[y] <= '9')
			{
				con *= 10;
				con -= s[y] - 48;
				y++;
			}
		}
		else
		{
			while (s[y] >= '0' && s[y] <= '9')
			{
				con *= 10;
				con += s[y] - 48;
				y++;
			}
		}
	}
	return (con);
}

/**
 * main - Entry point
 * Description: a function that prints the number of arguments.
 * @argc: arg count
 * @argv: arg v
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y = 0, h = 0, arr[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (_atoi(argv[1]) < 0)
		printf("0\n");
	else
	{
		x = _atoi(argv[1]);
		while (x > 0)
		{
			while (x >= arr[y])
			{
				x -= arr[y];
				h++;
			}
			y++;
		}
		printf("%d\n", h);
	}
	return (0);
}
