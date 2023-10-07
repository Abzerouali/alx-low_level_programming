#include "hash_tables.h"

/**
* hash_table_create - Creates a new hash table.
* @size: The size of the hash table.
* Return: A pointer to the newly created hash table, or NULL if an error occurs
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (!ht->array)
	{
		free(ht->array);
		return (NULL);
	}
	return (ht);
}

