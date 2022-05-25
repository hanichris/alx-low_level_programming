#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - computes the sum of all the parameters.
 * @n : expected number of arguments.
 * Return: sum of the arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argv;
	int sum = 0;
	unsigned int iter;

	if (n == 0)
		return (0);
	va_start(argv, n);
	for (iter = 0; iter < n; iter++)
		sum += va_arg(argv, int);
	va_end(argv);
	return (sum);
}
