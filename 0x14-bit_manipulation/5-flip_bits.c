#include "main.h"

/**
 * flip_bits - return a number of bit to be flip from one to another
 * @n: starting flip
 * @m: ending flip
 * Return: number of flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int i = 0;
	unsigned long int flip;

	for (flip = n ^ m; flip > 0; flip >>= 1)
		i += (flip & 1);
	return (i);
}

