#include <stdio.h>
#include "search_algos.h"


/**
 * print_array - print portion of array being searched through.
 * @array: pointer to the first element of the array.
 * @left: index of the lower bound of the array to print from.
 * @right: index of the upper bound of the array to print till.
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i = left;

	printf("Searching in array: ");
	for (; i <= right; i++)
	{
		if (i == right)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
}

/**
 * binary_search - basic implementation of binary search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in the array.
 * @value: value to search for.
 * Return: index of value in the array. Otherwise, -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid = 0;

	if (!array || size == 0)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
