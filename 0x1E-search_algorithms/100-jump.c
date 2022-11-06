#include <math.h>
#include <stdio.h>
#include "search_algos.h"
#define MIN(a, b) ((a) < (b) ? (a) : (b))


/**
 * jump_search - Implementation of the jump search algorithm.
 * @array: pointer to the first element in the sorted array to search.
 * @size: number of elements in the array.
 * @value: value to search for.
 * Return: index where the value is located. Otherwise, -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = 0;
	size_t prev = 0;

	if (!array || size == 0)
		return (-1);

	step = sqrt(size);

	do {
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			break;
	} while (array[MIN(step, size) - 1] < value);
	printf("Value found between indexes [%lu] and [%lu]\n",
		prev > 0 ? prev -= (int)sqrt(size) : 0,
		step > sqrt(size) ? step -= (int)sqrt(size) : (int)sqrt(size));
	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == MIN(step, size))
			break;
	}
	if (array[prev] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		return ((int)prev);
	}
	return (-1);
}
