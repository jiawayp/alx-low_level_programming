#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - index of the frist element
 * @size: number of element
 * @array: element in array
 * @cmp: pointer to funtion
 * Return: 0 if size <= 0 or -1
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
