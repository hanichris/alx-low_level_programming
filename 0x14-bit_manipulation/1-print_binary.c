#include "main.h"

/**
 * print_binary - print the binary equivalent of a decimal number.
 * @n: decimal number whose binary equivalent is to be printed out.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	unsigned long int temp = 0;
	int i, count_of_1 = 0;

	for (i = 63; i >= 0; i--)
	{
		temp = n >> i;
		if (temp & mask)
		{
			_putchar('1');
			count_of_1++;
		}
		else if (count_of_1)
			_putchar('0');
	}
	if (!count_of_1)
		_putchar('0');
}
