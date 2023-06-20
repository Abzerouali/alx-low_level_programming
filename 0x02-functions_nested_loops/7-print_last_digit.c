#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @l: parameter
 * return: l
 */

int print_last_digit(int l)
{
	int g;

	g= l % 10;
	_putchar(g + '0');
	return (g);
}
