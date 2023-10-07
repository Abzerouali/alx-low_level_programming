#include "hash_tables.h"

/**
*hash_table_delete - Deletes a hash table and its associated memory.
*@ht: The hash table to be deleted.
*Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size, index = 0;
	hash_node_t *cur, *tmp;

	if (!ht)
		return;
	size = ht->size;

	while (index < size)
	{
		cur = ht->array[index];
		while (cur)
		{
			tmp = cur;
			cur = cur->next;
			free(tmp->value);
			free(tmp);
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
