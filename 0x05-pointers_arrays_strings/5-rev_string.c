#include "main.h"

/**
 * rev_string - prototype
 * Description: it reverse a string.
 * @s: string parameter.
 * Return: 0
 */

void rev_string(char *s)
{
	int a, b, l;
	char t;

	a = 0;
	b = 0;
	while (s[a])
	{
		a++;
	}
	for (l = a - 1; b < a / 2; l--)
	{
		t = s[b];
		s[b] = s[l];
		s[l] = t;
		l--;
		b++;
	}
}
