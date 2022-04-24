#include "main.h"

/**
 * print_last_digit - return last digit
 * @num : number to check
 * Return: the last digit.
 */
int print_last_digit(int num)
{
	int last_digit;

	num = num >= 0 ? num : num * -1;
	last_digit = num % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
