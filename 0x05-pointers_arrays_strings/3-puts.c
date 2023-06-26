#include "main.h"

/**
 * _puts - prototype
 * Description: print string to stdout
 * @str: pointer
 * Return: 0
 */

void _puts(char *str)
{
	int a;

	a = 0;
	do {
		_putchar(str[a]);
		a++;
	} while (str[a] != '\0');
	_putchar('\n');
}
