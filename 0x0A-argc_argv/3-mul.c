#include <stdio.h>
#include <stdlib.h>

/**
 * main - check code.
 * @argc : int - argument count.
 * @argv : char * - argument vector.
 * Return: 0 or 1.
 */
int main(int argc, char *argv[])
{
	int iter;
	int mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (iter = 1; iter < argc; iter++)
		mul *= atoi(argv[iter]);
	printf("%d\n", mul);
	return (0);
}
