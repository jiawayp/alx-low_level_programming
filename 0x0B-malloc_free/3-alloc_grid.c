#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - return a point to 2D array of ints
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to the grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b, c = 0;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	grid = (int **)malloc(sizeof(*grid) * height);
	if (grid == NULL)
		return (NULL);
	while (c < height)
	{
		grid[c] = (int *)malloc(sizeof(int) * width);
		if (grid[c] == NULL)
		{
			while (c--)
				free(grid[c]);
			free(grid);
			return (NULL);
		}
		c++;
	}
	
	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			grid[a][c] = 0;

	return (grid);
}
