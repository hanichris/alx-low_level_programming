#include "main.h"

/**
 * square - determine the sqrt of a natural number.
 * @seed : int - starting point of analysis to find sqrt of num.
 * @num : int - integer whose sqrt is to be determined.
 * Return: int - sqrt of n or -1..
 */
int square(int seed, int num)
{
	if (num == 0 || num == 1)
		return (num);
	else if (seed * seed < num)
		return (square(seed + 1, num));
	else if (seed * seed == num)
		return (seed);
	return (-1);
}

/**
 * _sqrt_recursion - return the sqrt of a number.
 * @n : int - integer whose square rooot is to be determined.
 * Return: int - sqrt of an integer.
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	return (square(1, n));
}
