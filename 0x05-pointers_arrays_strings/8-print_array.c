#include <stdio.h>

void print_array(int *a, int n)
{
	int iter = 0;

	while (iter < n)
	{
		printf("%i",a[iter]);
		if (iter > 0)
			printf(", ");
		iter++;
	}
	printf("\n");
}
