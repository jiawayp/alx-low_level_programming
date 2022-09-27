#include "main.h"

/**
 * _memset - fills the memory with contant byte
 * @s: string array
 * @b: constant
 * @n: number of bytes
 * Return: s
 */

char *_memset(char *b, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
