#include <stdio.h>

/**
 * main - check code.
 * @argc : int - argument count.
 * @argv : char* - argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int iter = 0;

	for (; iter < argc; iter++)
	{
		printf("%s\n", argv[iter]);
	}
	return (0);
}
