#include "main.h"
#include <stdlib.h>

/**
*string_nconcat -Concatenates two strings, up to n characters from the second string
*@str1: Pointer to the first string
*@str2: Pointer to the second string
*@n: Number of characters to concatenate from the second string
*Return: Pointer to the concatenated string (str1 + str2)
*/
char *string_nconcat(char *str1, char *str2, unsigned int n)
{
	char *res;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";
	while (str1[len1] != '\0')
	{
		len1++;
	}
	while (str2[len2] != '\0')
	{
		len2++;
	}
	if (n > len2)
		n = len2;
	res = (char *)malloc((len1 + n + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (i < len1)
	{
		res[i] = str1[i];
		i++;
	}
	while (j < n && str2[j] != '\0')
	{
		res[i] = str2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}
