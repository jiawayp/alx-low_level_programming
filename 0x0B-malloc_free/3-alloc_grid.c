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
	while (a < height)
	{
		while (b < width)
		{
			grid[a][b] = 0;
			b++;
		}
		a++;
	}

	return (grid);
}
