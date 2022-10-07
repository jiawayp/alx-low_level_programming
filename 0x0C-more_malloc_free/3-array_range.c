#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function create an array of int
 * @min: starting num
 * @max: ending num
 * Return: Pointer to the area in memory
 */

int *array_range(int min, int max)
{
	int *array;
	int a = max - min;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (a + 1));
	if (!array)
	{
		return (NULL);
	}
	while (max > min)
	{
		array[a] = max;
		a--;
		max--;
	}
	array[a] = min;
	return (array);
}
