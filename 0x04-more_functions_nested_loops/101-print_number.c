#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: integer
 */

void print_number(int n)
{
	unsigned int r;

	if (n < 0)
	{
		r = -n;
		_putchar('-');
		print_number(r);
	}
	else if (n <= 9)
	{
		r = n;
	}
	else
	{
		r = n;
		print_number(r / 10);
		print_number(r % 10);
	}
	_putchar(r);
}
