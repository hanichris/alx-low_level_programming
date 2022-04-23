#include<stdio.h>

/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	char first = 'a';
	char second = 'A';

	while (first <= 'z')
	{
		putchar(first);
		first++;
	}

	while (second <= 'Z')
	{
		putchar(second);
		second++;
	}
	putchar('\n');
	return (0);

}
