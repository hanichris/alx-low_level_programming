#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds a new element of the hash table.
 * @ht: pointer to the hash table.
 * @key: key element to index the hash table.
 * @value: value element to store at the given key.
 * Return: 1 if successful. Otherwise, 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *curr;
	unsigned long int index;
	char *value_duplicate;
	char *key_duplicate;

	if (!ht || !key)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	value_duplicate = strdup(value);
	key_duplicate = strdup(key);

	/*Update value if the key is present within the hash table.*/
	if (ht->array[index])
	{
		for (curr = ht->array[index]; curr; curr = curr->next)
		{
			if (strcmp(curr->key, key) == 0)
			{
				free(curr->value);
				curr->value = value_duplicate;
				return (1);
			}
		}
	}
	/*Add key:value pair to the hash_table.*/
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(value_duplicate);
		return (0);
	}
	new_node->key = key_duplicate;
	new_node->value = value_duplicate;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
