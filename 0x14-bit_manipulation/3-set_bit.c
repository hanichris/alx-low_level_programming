#include "main.h"

/**
 * set_bit - set the bit at a particular index to 1.
 * @n: pointer to the number whose bit is to be changed.
 * @index: index of the bit of interest.
 * Return: 1 if successful otherwise -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	*n |= 1 << index;
	return (1);
}
