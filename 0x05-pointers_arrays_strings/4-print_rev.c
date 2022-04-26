#include "main.h"

/**
 * print_rev - print the reverse of a string
 * @s : pointer to a string.
 * Return: void.
 */
void print_rev(char *s)
{
	int iter = 0;

	while (s[iter])
		iter++;

	while (iter--)
		_putchar(s[iter]);

	_putchar('\n');
}
