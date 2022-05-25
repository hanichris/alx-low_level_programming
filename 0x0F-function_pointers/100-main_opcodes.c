#include <stdio.h>

/**
 * main - check code.
 * @argc : argument count.
 * @argv : argument vector.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes;
	int iter;
	unsigned char *opcode;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	opcode = (unsigned char *)main;

	for (iter = 0; iter < bytes; iter++)
	{
		if (iter == bytes - 1)
			printf("%02hhx\n", opcode[iter]);
		else
			printf("%02hhx ", opcode[iter]);
	}
	return (0);
}
