#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * get_bit - return the index of a given bit
 * @n: number to index
 * @index: bit to return
 * Return: 1 or 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	i = ((n >> index) & 1);
	if (index >= 65)
		return (-1);
	return (i);
}
