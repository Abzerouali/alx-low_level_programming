#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @l: parameter
 * return: g
 */

int print_last_digit(int l)
{
	if (l < 0)
	{
		l = l* -1;
	}
	l= l % 10;
	_putchar(l + '0');
	return (l);
}
