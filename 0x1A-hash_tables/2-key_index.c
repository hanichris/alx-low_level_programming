#include "hash_tables.h"

/**
 * key_index - compute the index of a given key.
 * @key: string whose index in the array is to be determined.
 * @size: size of the array.
 * Return: the index of the key in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2((unsigned char *) key);
	return (hash % size);
}
