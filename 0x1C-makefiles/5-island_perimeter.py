#!/usr/bin/python3
""" Technical Interview. Find the perimeter of the described island."""


def island_perimeter(grid):
    """Determines the perimeter of an island described in a grid.

    Args:
        grid (matrix): matrix of 1s signifying land. 0s signify water.

    Returns:
        int : perimeter of the island.
    """
    row = len(grid)
    col = len(grid[0])
    perimeter = 0

    for i in range(row):
        for j in range(col):
            if grid[i][j]:
                perimeter += 4
                if i > 0:
                    perimeter -= grid[i - 1][j]
                if i < row - 1:
                    perimeter -= grid[i + 1][j]
                if j > 0:
                    perimeter -= grid[i][j - 1]
                if j < col - 1:
                    perimeter -= grid[i][j + 1]
    return perimeter
