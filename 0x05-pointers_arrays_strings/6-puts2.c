#include "main.h"
/**
 * puts2 - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/
void puts2(char *str)
{
	int iter = 0;

	while (str[iter] != '\0')
	{
		if (iter % 2 == 0)
			_putchar(str[iter]);
		iter++;
	}
	_putchar('\n');
}
