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
	int iter, si;
	int sum = 0;
	char *end;
	long sl;

	if (argc < 2)
		printf("%d\n", 0);
	else
	{
		for (iter = 1; iter < argc; iter++)
		{
			sl = strtol(argv[iter], &end, 10);
			if (end == argv[iter])
			{
				printf("Error\n");
				return (1);
			}
			si = (int)sl;
			sum += si;
		}
		printf("%d\n", sum);
	}
	return (0);
}
