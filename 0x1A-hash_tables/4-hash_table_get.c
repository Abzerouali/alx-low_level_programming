#include "hash_tables.h"

/**
* hash_table_get - Retrieves the value associated with a key in the hash table.
* @ht: The hash table to look into.
* @key: The key to look for.
* Return: The value associated with the key, or NULL..
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, size;
	hash_node_t *cur;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	size = ht->size;
	index = key_index((unsigned char *)key, size);

	cur = ht->array[index];
	while (cur)
	{
		if (strcmp(cur->key, key) ==  0)
			return (cur->value);
		cur = cur->next;
	}
	return (NULL);
}
