#include "main.h"

/**
 * *_memset - a function fills memory with a constant byte
 * @s: pointer
 * @b: char
 * @n: number
 * Return:s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
