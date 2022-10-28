#include "main.h"

/**
 * clear_bit - set the value of a given index bit to zero
 * @n: pointer to the bit
 * @index: starting bit index
 * Return: 1 if success else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 65)
		return (-1);
	if ((*n >> index) & 1)
	{
		*n -= 1 << index;
		return (1);
	}
	return (1);
}
