#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print out all the arguments passed taking
 * into account the types of the arguments
 * @format : string declaring the possible types of the arguments.
 */
void print_all(const char * const format, ...)
{
	va_list argv;
	int iter = 0;
	char *str;

	va_start(argv, format);
	while (format[iter])
	{
		switch (format[iter++])
		{
			case 'c':
				printf("%c", va_arg(argv, int));
				break;
			case 'i':
				printf("%d", va_arg(argv, int));
				break;
			case 'f':
				printf("%f", va_arg(argv, double));
				break;
			case 's':
				str = va_arg(argv, char *);
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
			default:
				continue;
		}
		if (format[iter])
			printf(", ");
	}
	printf("\n");
	va_end(argv);
}

