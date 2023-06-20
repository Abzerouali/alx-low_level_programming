#include "main.h"

/*print_sign - is a function that prints the sign of a number.
 *@n: int type
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		if (n < 0)
		{
			_putchar('-');
			if (n == 0)
			{
				_putchar('0');
				return (0);
			}
		return (-1);
		}
	return (1);
	}
}
