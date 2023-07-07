#include "main.h"
/**
 *
 * _strspn - checker
 * @s: pointer
 * @accept: pointer
 * Return: counter
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, y;
	unsigned int counter = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				counter++;
				break;
			}
		}
		if (accept[y] == '\0')
		{
			break;
		}
	}
	return (counter);
}
