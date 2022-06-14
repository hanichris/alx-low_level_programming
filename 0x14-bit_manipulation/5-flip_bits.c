#include "main.h"

/**
 * flip_bits - counts the number of bits that need to be flipped
 * to move from one number to another.
 * @n: first number.
 * @m: second number.
 * Return: number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long mask = n ^ m;
	unsigned int count = 0;

	while (mask)
	{
		mask &= (mask - 1);
		count++;
	}
	return (count);
}
