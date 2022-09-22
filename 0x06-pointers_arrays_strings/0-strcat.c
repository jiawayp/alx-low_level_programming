#include "main.h"

/**
 * _strcat - function that combine two strings
 * @dest: destination char
 * @src: source char
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int n = 0;
	int x;

	while (dest[n] != '\0')
	{
		n++;
	}

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[n + x] = src[x];
	}
	dest[n + x] = '\0';
}
