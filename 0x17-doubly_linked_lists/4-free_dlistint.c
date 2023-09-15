#include "lists.h"

/**
*free_dlistint - Frees a doubly linked list.
*@head: A pointer to the head of the list.
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *begin, *next;

	begin = head;

	while (begin)
	{
		next = begin->next;
		free(begin);
		begin = next;
	}
}
