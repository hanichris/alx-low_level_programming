#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - allocate a grid of integers with elements init to 0.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Pointer to grid or NULL.
 */
int **alloc_grid(int width, int height)
{
	int row;
	int col;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);
	row = 0;
	while (row < height)
	{
		grid[row] = malloc(sizeof(**grid) * width);
		if (!grid[row])
		{
			while (row--)
				free(grid[row]);
			free(grid);
			return (NULL);
		}
		col = 0;
		while (col < width)
		{
			grid[row][col] = 0;
			col++;
		}
		row++;
	}
	return (grid);
}
