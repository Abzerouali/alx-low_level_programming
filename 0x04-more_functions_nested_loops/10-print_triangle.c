#include "main.h"

/**
* print_triangle -a function that prints a triangle, followed by a new line.
* * @size: integer
*/

void print_triangle(int size)
{
	int a = 0;
	int b = 0;

	if (size < 1)
	{
		_putchar('\n');
	}
	while (a < size)
	{
		while (b < size)
		{
			if (b < size - a - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}

