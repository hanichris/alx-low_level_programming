#include<stdio.h>

/**
 * main - main block
 * Description: prints the lowercase alphabet in
 * reversse, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}

