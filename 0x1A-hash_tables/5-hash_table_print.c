#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - print out the hash table.
 * @ht: pointer to the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char flag = 0;
	hash_node_t *curr;

	printf("{");
	for (i = 0; ht && i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (flag)
				printf(", ");
			for (curr = ht->array[i]; curr;)
			{
				printf("'%s': '%s'", curr->key, curr->value);
				curr = curr->next;
				if (curr)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
