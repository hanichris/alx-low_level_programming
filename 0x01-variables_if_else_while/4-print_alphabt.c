#include<stdio.h>

/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	char first = 'a';

	while (first <= 'z')
	{
		if (first != 'e' && first != 'q')
		{
			putchar(first);
		}
		first++;
	}
	putchar('\n');
	return (0);

}
