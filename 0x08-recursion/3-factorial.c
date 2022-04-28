#include "main.h"

/**
 * factorial - find the factorial of int n >= 0.
 * @n : int
 * Return: int - the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
