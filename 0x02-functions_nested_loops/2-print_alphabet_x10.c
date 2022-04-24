#include "main.h"

/**
 * print_alphabet_x10 - print out the lowercase alphabet
 * 10 times using the defined _putchar function
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int row = 0;

	for (; row < 10; row++)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}
