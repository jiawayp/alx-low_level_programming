#include "main.h"

/**
 * _memset - fills the memory with contant byte
 * @s: pointer to memory
 * @b: constant bytes
 * @n: number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		s[a] = b;
		a++;
	}

	return (s);
}
