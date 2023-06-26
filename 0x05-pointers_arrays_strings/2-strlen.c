#include "main.h"

/**
 * _strlen - prototype
 * Description: calculates the length of a string.
 * @s: pointer to a string.
 * Return: an integer
 */

int _strlen(char *s)
{
	int a = 0;

	do {
		a++;
	} while (s[a])
	return (a);
}
