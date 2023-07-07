#include "main.h"
#include <stdio.h>
/**
 * _strchr - function 
 * @s: string
 * @c: char
 * Return: nulll
 */
char *_strchr(char *s, char c)
{
	int x;

	while (1)
	{
		x = *s++;
		if (x == c)
		{
			return (s - 1);
		}
		if (x == 0)
		{
			return (NULL);
		}
	}
}
