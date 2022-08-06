#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - delete the hash table.
 * @ht: pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *next, *curr;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		next = NULL;
		for (curr = ht->array[i]; curr; curr = next)
		{
			next = curr->next;
			free(curr->key);
			free(curr->value);
			free(curr);
		}
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
