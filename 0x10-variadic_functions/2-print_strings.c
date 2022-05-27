#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print out the variable number of strings passed
 * to the function.
 * @separator: type of separator used to partition the strings.
 * @n: number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argv;
	unsigned int iter;
	char *str;

	va_start(argv, n);

	for (iter = 0; iter < n; iter++)
	{
		str = va_arg(argv, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator && iter < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(argv);
}
