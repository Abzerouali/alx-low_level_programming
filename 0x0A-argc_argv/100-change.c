#include "main.h"
#include <stdio.h>

/**
 *
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
