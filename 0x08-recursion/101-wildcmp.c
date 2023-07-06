#include "main.h"

/**
 * wildcmp - a function that compare strings
 * @s1: pointer1
 * @s2: pointer2
 * Return: 1 or 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		return (wildcmp(s2 + 1, s1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	if (*s1 == *s2 || *s2 == '*')
	{
		return (wildcmp(s2 + 1, s1 + 1));
	}
	return (0);
}
