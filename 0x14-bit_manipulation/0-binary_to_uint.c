#include "main.h"

/**
 * binary_to_uint - convert binary to unsigend int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number or 1 else b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	unsigned int i;

	num = 0;
	if (!b || !(*b))
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] > 49)
			return (0);
		else if (b[i] == 49)
		{
			num <<= 1;
			num = num + 1;
		}
		else
			num <<= 1;
	}
		return (num);
}

