#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function returns a pointer to 2d array
 * @width: colums
 * @height: row;
 * Return: pointer to 2 d
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
