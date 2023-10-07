#include "hash_tables.h"

/**
* hash_table_print - Prints the contents of a hash table.
* @ht: The hash table to be printed.
* Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size, index = 0, flag = 0;
	hash_node_t *cur;

	if (!ht)
		return;
	size = ht->size;

	printf("{");
	while (index < size)
	{
		cur = ht->array[index];
		while (cur)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", cur->key, cur->value);
			flag = 1;
			cur = cur->next;
		}
		index++;
	}
	printf("}\n");
}
