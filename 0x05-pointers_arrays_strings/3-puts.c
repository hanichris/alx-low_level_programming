#include "main.h"

/**
 * _puts - print out a string to stdout
 * @str : pointer to character array
 * Return: void.
 */
void _puts(char *str)
{
	int iter = 0;

	while (str[iter] != '\0')
	{
		_putchar(str[iter]);
		iter++;
	}
	_putchar('\n');
}
