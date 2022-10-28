#include "main.h"

/**
 * set_bit - set the value of a bit to a given index
 * @n: pointer to bit index
 * @index: starting bit 0
 * Return: 1 if success else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (!((*n >> index) & 1))
	{
		*n +=+ 1 << index;
		return (1);
	}
	if (index >= 65)
		return (-1);
	return (-1);
}
