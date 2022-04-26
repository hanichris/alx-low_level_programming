#include "main.h"

/**
 * swap_int - swap pointers to integers
 * @a : pointer to int
 * @b : pointer to int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
