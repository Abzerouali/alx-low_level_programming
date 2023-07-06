#include "main.h"

/**
* _puts_recursion - Prototyppe
* Description: a function that prints a string.
* @s : Printed string
*/

void _puts_recursion(char *s)
{
	if (*s  == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
