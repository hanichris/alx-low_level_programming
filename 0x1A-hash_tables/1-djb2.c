#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm.
 * @str: String whose hash is to be computed.
 * Return: hash value of the string.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;

	return (hash);
}
