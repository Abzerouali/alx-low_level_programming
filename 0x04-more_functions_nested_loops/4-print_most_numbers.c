#include "main.h"
/**
* print_most_numbers - a function that prints the numbers, from 0 to 9
* Return: nothing
*/

void print_most_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		if (a == 2 || a == 4)
		{
			continue;
		}
			_putchar(a + '0');
			a++;
		}
	_putchar('\n');
}
