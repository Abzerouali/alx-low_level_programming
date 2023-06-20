#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @l: parameter
 * return: l
 */

int print_last_digit(int l)
{
	_putchar((l % 10) + '0');
	return (l);
}
