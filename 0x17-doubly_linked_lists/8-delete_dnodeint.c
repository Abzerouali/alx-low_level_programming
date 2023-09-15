#include "lists.h"

/**
*delete_dnodeint_at_index - Deletes a node at a given index
*in a doubly linked list.
*@head: A pointer to a pointer to the head of the list.
*@index: The index at which to delete the node.
*Return: 1 if the node is deleted successfully, -1 if not.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (!current)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	while (index > 0 && current)
	{
		current = current->next;
		index--;
	}

	if (!current)
		return (-1);

	if (current->prev)
		current->prev->next = current->next;

	if (current->next)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
