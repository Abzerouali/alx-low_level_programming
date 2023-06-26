#include "main.h"

/**
 * puts2 - Prototype
 * Description: function that prints every other character of a string
 * @str : string
 */

void puts2(char *str)
{
	int a;

	a = 0;
	do {
		if (a % 2 == 0)
			_putchar(str[a]);
		a++;
	} while (str[a] != '\0');
	_putchar('\n');
}
