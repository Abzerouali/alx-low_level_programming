#include "lists.h"
/**
*add_dnodeint_end - Adds a new node at the end of a doubly linked list.
*@head: A pointer to a pointer to the head of the list.
*@n: The data to be stored in the new node.
*Return: A pointer to the newly created node, or NULL on failure.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);

	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = NULL;

	if (!*head)
	{
		*head = newnode;
		return (newnode);
	}
	current = *head;

	while (current->next)
		current = current->next;

	current->next = newnode;
	newnode->prev = current;

	return (newnode);
}
