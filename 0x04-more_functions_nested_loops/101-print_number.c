#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: integer
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_number(-n);
	}
	else if (n <= 9)
	{
		_putchar(n + '0');
	}

	else
	{
		print_number(n / 10);
	}
	print_number(n % 10);
}
