#include <stdio.h>

void print_array(int *a, int n)
{
	int iter = 0;

	while (iter < n)
	{
		printf("%i, ",a[iter]);
		iter++;
	}
	printf("\n");
}
