#include "main.h"

/**
 *
 * _strpbrk - checker
 * @s: pointer
 * @accept: pointer
 * Return: char
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				return (s + x);
			}
		}
	}
	return ('\0');
}
