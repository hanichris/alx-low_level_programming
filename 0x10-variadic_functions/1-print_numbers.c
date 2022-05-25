#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print out n parameters to stdout.
 * @separator: string representing type of separator to use.
 * @n: number of parameters.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argv;
	unsigned int i;

	va_start(argv, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", va_arg(argv, int));
		else
		{
			if (separator)
				printf("%d%s", va_arg(argv, int), separator);
			else
				printf("%d", va_arg(argv, int));
		}
	}
	va_end(argv);
}
