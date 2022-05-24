#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - applies a function to each element in the array.
 * @array: array whose elements are to be transmuted.
 * @size: size of the array.
 * @action: pointer to the action function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
