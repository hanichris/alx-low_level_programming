#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _calloc - makeshift calloc function.
 * @nmemb: the number of elements in memory.
 * @size: the size of the memory to allocate.
 *
 * Return: NULL or void pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	int iter = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);
	while (mem[iter])
	{
		mem[iter] = 0;
		iter++;
	}
	return ((void *)mem);

}
