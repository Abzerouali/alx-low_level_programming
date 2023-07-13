#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*_realloc - Reallocates a memory block with a new size.
*@ptr: Pointer to the memory block to reallocate.
*@old_size: Current size of the memory block.
*@new_size: New size of the memory block.
*Return: Pointer to the reallocated memory block.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i = 0;
	unsigned int tmp_size;

	tmp_size = new_size;

	if (ptr == NULL)
		return (malloc(new_size));
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(tmp_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
		tmp_size = old_size;

	while (i < tmp_size)
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
		i++;
	}

	free(ptr);
	return (new_ptr);
}
