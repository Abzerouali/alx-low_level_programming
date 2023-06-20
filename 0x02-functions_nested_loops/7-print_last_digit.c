#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @l: parameter
 * return: g
 */

int print_last_digit(int l)
{
	int g;

	g= l % 10;
	_putchar('0' + g);
	_putchar('\n');
	return (g);
}
