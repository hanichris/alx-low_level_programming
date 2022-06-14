#include "main.h"

/**
 * get_bit - return the bit at the specified index.
 * @n: decimal number.
 * @index: bit index of interest.
 * Return: bit value or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 0;

	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}

