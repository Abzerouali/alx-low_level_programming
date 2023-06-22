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
		print_number(n);
	}
	else if (n <= 9)
	{
		r = n;
		_putchar(r + '0');
	}

	else
	{
		print_number(n / 10);
		print_number(n % 10);
	}
}
