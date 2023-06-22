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
		_putchar('\n');

	else
	{
		do {
			do {
				if (b < size - a - 1)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				b++;
			} while(b < size)
			_putchar('\n');
			a++;
		} while(a < size);
	}
}
