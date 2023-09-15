#include "lists.h"

/**
*dlistint_len - Computes the length of a doubly linked list.
*@h: A pointer to the head of the list.
*Return: The number of nodes in the list.
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t list_size = 0;

	while (current != NULL)
	{
		current = current->next;
		list_size++;
	}
	return (list_size);
}

/**
*insert_dnodeint_at_index - Inserts a node at a specified index
*in a doubly linked list.
*@h: A pointer to a pointer to the head of the list.
*@idx: The index at which to insert the new node.
*@n: The data for the new node.
*
*Return: A pointer to the newly created node, or NULL on failure.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *current, *next;

	if (h == NULL || idx > dlistint_len(*h))
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));

	current = *h;
	while (idx > 1)
	{
		current = current->next;
		idx--;
	}

	next = current->next;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = current;
	newnode->next = next;
	current->next = newnode;
	next->prev = newnode;

	return (newnode);
}
