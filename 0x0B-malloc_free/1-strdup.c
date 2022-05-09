#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - copy contents of an arbitrary string into a new string.
 * @str : pointer to string
 * Return: NULL or pointer to new string.
 */
char *_strdup(char *str)
{
	int iter_0 = 0;
	int iter_1 = 0;
	int size = 0;
	char *new_str;

	if (!str)
		return (NULL);
	while (str[iter_0])
	{
		size++;
		iter_0++;
	}

	new_str = malloc(sizeof(char) * size);
	if (new_str)
	{
		while (iter_1 < size)
		{
			*(new_str + iter_1) = *(str + iter_1);
			iter_1++;
		}
		return (new_str);
	}
	return (NULL);
}

