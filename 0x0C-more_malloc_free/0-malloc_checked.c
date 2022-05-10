#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory.
 * @b: no of bytes to allocate.
 * Return: Pointer to memory or 98.
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (!mem)
		exit(98);
	return (mem);
}
