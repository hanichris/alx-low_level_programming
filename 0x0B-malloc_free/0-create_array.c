#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - Create an array of characters and initialize it with
 * a specific character.
 * @size : size of the memory to create.
 * @c : character to initialze the array with.
 *
 * Return: NULL or pointer to array.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int iter = 0;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);
	if (str)
	{
		while (iter < size)
		{
			if (iter == size - 1)
				*(str + iter) = '\0';
			*(str + iter) = c;
			iter++;
		}
		return (str);
	}
	return (NULL);
}

