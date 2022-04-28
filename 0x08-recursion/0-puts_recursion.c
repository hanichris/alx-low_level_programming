#include "main.h"

/**
 * _puts_recursion - print out a character array to std output.
 * @s : pointer to a character array.
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
