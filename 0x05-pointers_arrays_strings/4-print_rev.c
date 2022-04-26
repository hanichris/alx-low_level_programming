#include "main.h"

void print_rev(char *s)
{
	int iter;
	int len = 0, i = 0;

	for (; s[i] != '\0'; i++)
		len++;

	iter = len;

	for (; iter >= 0; iter--)
		_putchar(s[iter]);
	_putchar('\n');
}
