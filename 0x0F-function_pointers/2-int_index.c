#include "function_pointers.h"
#include <stdio.h>

/**
*int_index - function that searches for an integer.
*@array: The array to search.
*@size: The number of elements in the array.
*@cmp:  a pointer to the function to be used to compare values.
*Returns:the index of the first occurrence of the value that satisfies
*the comparison function, or -1 if the value is not found.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
		return (-1);
	if (cmp != NULL && array != NULL)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
				return (index);
		}
	}
	return (-1);
}
