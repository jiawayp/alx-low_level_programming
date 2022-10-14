#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: pointer to array
 * @size: number of elements
 * @cmp: pointer to function
 * Return: index of first element, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
