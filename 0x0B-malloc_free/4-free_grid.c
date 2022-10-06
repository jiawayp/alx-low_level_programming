#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - function to free 2D array
 * @grid: grid to free
 * @height: height of grid
 * Return: none
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
