#include "main.h"

/**
 * get_endianness - check the endianness
 * Return: 0 if big endian 1 if small endian
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *end = (char *)&a;

	if (*end)
		return (1);
	return (0);
}
