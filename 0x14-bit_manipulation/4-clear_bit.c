#include "main.h"

/**
 * clear_bit - set the bit at the specified index to 0.
 * @n: pointer to the number whose bit is to change.
 * @index: index of bit that is to be cleared.
 * Return: 1 if successful otherwise -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
