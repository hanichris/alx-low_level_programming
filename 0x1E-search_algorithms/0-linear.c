#include <stdio.h>
#include "search_algos.h"


/**
 * linear_search - linear search algorithm basic implementaion.
 * @array: pointer to the first element of the array to be searched.
 * @size: number of elements in the array.
 * @value: value to be searched for.
 * Return: first index where the value is located. Otherwise, -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);
	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (*(array + i) == value)
			return (i);
	}
	return (-1);
}
