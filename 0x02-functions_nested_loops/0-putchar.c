#include<stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return:0
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (0);
}
