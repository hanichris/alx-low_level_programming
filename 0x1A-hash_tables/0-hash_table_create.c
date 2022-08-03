#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * hash_table_create - create an empty hash table with Chaining
 * collision handling.
 * @size: size of the hash table array.
 * Return: Pointer to the created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *head;
	unsigned long int i;

	head = malloc(sizeof(hash_table_t));
	if (!head)
		return (NULL);

	head->size = size;
	head->array = malloc(sizeof(hash_node_t *) * size);
	if (!head->array)
		return (NULL);
	for (i = 0; i < size; i++)
		head->array[i] = NULL;
	return (head);
}
