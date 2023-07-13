#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*array_range - Creates an array of integers containing a range of values.
*@min: Minimum value.
*@max: Maximum value.
*Return: Pointer to the created array.
*/
int *array_range(int min, int max)
{
	int *res;
	int size;
	int x = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	res = malloc(size * sizeof(int));
	if (result == NULL)
		return (NULL);

	while (x < size)
	{
		res[x] = min + x;
		x++;
	}

	return (res);
}
