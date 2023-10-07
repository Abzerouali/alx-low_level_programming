#include "hash_tables.h"

/**
* hash_table_set - Adds or updates an element in the hash table.
* @ht: The hash table to which the key/value pair is added or updated.
* @key: The key to be added or updated in the hash table.
* @value: The value associated with the key.
* Return: 1 if the operation succeeds, 0 otherwise.
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newht;
	char *value_copy;
	unsigned long int index, c;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (c = index; ht->array[c]; c++)
	{
		if (strcmp(ht->array[c]->key, key) == 0)
		{
			free(ht->array[c]->value);
			ht->array[c]->value = value_copy;
			return (1);
		}
	}

	newht = malloc(sizeof(hash_node_t));
	if (newht == NULL)
	{
		free(value_copy);
		return (0);
	}
	newht->key = strdup(key);
	if (newht->key == NULL)
	{
		free(newht);
		return (0);
	}
	newht->value = value_copy;
	newht->next = ht->array[index];
	ht->array[index] = newht;

	return (1);
}
