#include "main.h"

/**
 * binary_to_uint - convert binary to unsigend int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number or 1 else b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	unsigned mult;
	int len;

	num = 0;
	mult = 1;
	if (b == '\0')
		return (0);
	for (len = 0; b[len]; len++)
		;
	for (len -= 1; len > 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		num = num + (b[le] - '0') * mult;
		mult = mult * 2;
	}
	return (num);
}
