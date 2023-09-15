#include "lists.h"

/**
*dlistint_len - Computes the length of a doubly linked list.
*@h: A pointer to the head of the list.
*Return: the size of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t list_size = 0;

	if (!curr)
		return (0);
	while (curr)
	{
		curr = curr->next;
		list_size++;
	}
	return (list_size);
}
