#include "main.h"
#include <stdlib.h>
/**
*malloc_checked - checker
*@b: var
*Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (void *)malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
