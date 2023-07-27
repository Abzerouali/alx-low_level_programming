#include "lists.h"

/**
* print_list - a function that prints all the elements of a list_t list.
* @h: Pointer to the head of the list.
* Return: the number of nodes.
*/
size_t print_list(const list_t *h)
{
	char *string;
	unsigned int lenght;
	int i = 0;

	while (h)
	{
		lenght = h->lenght;
		string = h->string;
		if (string)
		{
			printf("[%d] %s\n", lenght, string);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		i++;
	}
	return (i);
}
