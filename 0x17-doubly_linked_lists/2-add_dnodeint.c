#include "lists.h"
/**
*add_dnodeint - Adds a new node at the beginning of a doubly linked list.
*@head: A pointer to a pointer to the head of the list.
*@n: The data to be stored in the new node.
*Return: A pointer to the newly created node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
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
	newnode->next = *head;

	(*head)->prev = newnode;
	*head = newnode;

	return (newnode);
}

