#include<stdio.h>

/**
 * main - main block
 * Description: prints all single digit numbers of base 16
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int num = 0;
	char alpha = 'a';

	while (num < 16)
	{
		if (num < 10)
			putchar(num + '0');
		else
		{
			putchar(alpha);
			alpha++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}

