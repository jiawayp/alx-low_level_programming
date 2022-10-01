#include "main.h"
/**
 * _strncat - combine two strings
 * @dest: The destination char
 * @src: The source char
 * @n: integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i + n + 1] = '\0';

	return (dest);
}
