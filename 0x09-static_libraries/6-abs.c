#include "main.h"

/**
 *
 * _abs - checker
 * @n:variable
 * Return: n.
 *
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n = n * -1);
	}
	else
	{
		return (n);
	}
}
