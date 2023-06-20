#include "main.h"

/**
 *times_table - a function that prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if (c == 0)
			{
				_putchar(0 + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (c <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar(c + '0');
				_putchar(',');
			}
		}
		_putchar('\n');
	}


}
