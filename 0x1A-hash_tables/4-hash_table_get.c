#include "hash_tables.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_get - retrieve a value associated with a key.
 * @ht: pointer to the hash table.
 * @key: key whose value is to be retrieved.
 * Return: NULL or value at the given key.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *curr;

	if (!ht || !key)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		for (curr = ht->array[index]; curr; curr = curr->next)
		{
			if (strcmp(curr->key, key) == 0)
			{
				return (curr->value);
			}
		}
	}
	return (NULL);
}
