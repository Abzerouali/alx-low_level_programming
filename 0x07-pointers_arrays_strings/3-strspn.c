#include "main.h"

/**
* _strspn - Prototype
* Description : a function gets the length of a prefix substring
* @s: string
* @accept: string containing the list of charchters to match in s
* Return: len
*/
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;

	a = 0;
	while (s[a] != '\0')
	{
		j = 0;
		c = 1;

		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				c = 0;
				break;
			}
			b++;
		}
		if (c == 1)
			break;
		a++;
	}
	return (a);
}
