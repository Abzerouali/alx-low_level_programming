#include "main.h"

/**
 * _pow_recursion - a function return x raised to the power of y.
 * @y: intger
 * @x: integer
 * Return: -1,1,x raised to the power of y.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y < 1)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
