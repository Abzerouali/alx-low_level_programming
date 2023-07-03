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
	unsigned int len = 0;
	int a, b, c;

	for (a = 0; s[a]; a++)
	{
		c = 0;
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				b = 1;
				break;
			}
		}
		if (!c)
			return (len);
		len++;
	}
	return (len);
}
