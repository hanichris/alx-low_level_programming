#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the grid
 * @grid: grid of memories
 * @height: int
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int row = 0;

	while (row < height)
	{
		free(grid[row]);
		row++;
	}
	free(grid);
}
