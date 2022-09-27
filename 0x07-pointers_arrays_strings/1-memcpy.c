#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of byes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}

	return (dest);
}
