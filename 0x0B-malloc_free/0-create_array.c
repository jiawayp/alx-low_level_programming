#include <stdlib.h>

/**
 * create_array - create an array to specific char
 * @size: size to make char 
 * @c: charcter to fill the array
 * Return: the array char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *array;

	if (size < 1)
		return (0);
	array = malloc(size);
	if (array == 0)
		return (0);
	for (a = 0; a < size; a++)
	{
		array[a] = c;
	}
	return (array);
}
