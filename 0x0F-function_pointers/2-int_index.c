#include "function_pointers.h"

/**
 * int_index - returns the index of the first element of interest.
 * @array: array to search through.
 * @size: size of the array.
 * @cmp: pointer to the comparator function.
 * Return: either -1 or index within array.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
