#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - funtion that execute given function
 * @array: pointer array
 * @size: number of element
 * @action: pointer to array
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
