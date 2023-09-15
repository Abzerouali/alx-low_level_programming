#include "lists.h"

/**
*sum_dlistint - Computes the sum of all 'n' values in a doubly linked list.
*@head: A pointer to the head of the list.
*Return: The sum of all 'n' values in the list.
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
