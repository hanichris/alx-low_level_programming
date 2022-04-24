#include "main.h"

/**
 * print_alphabet - use the defined _putchar function
 * to print out the alphabet in lowercase followed
 * by a newline.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
