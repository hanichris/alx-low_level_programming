#include "main.h"

/**
 * evaluate_num - performs primality check using % operator.
 * @start : int - starting point for the analysis.
 * @num : int - number whose primality is to be determined.
 * Return: int -  0 or 1
 */
int evaluate_num(int start, int num)
{
	if (start == num)
		return (1);
	if (num % start)
		return (evaluate_num(start + 1, num));
	return (0);
}

/**
 * is_prime_number - check whether the num passed is prime or not.
 * @n : int - number whose primality is to be determined.
 * Return: int -  0 or 1
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (evaluate_num(2, n));
}
