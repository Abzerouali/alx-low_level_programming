#include "hash_tables.h"

/**
* hash_djb2 - Implements the DJB2 hash algorithm.
* @str: The string used to generate the hash value.
* Return: The computed hash value.
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int cha;

	hash = 5381;
	while ((cha = *str++))
	{
		hash = ((hash << 5) + hash) + cha;
	}
	return (hash);
}
