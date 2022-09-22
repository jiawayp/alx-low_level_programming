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
	int x = 0;

	while (dest[n] != '\0')
	{
		n++;
	}

	while (x < n && src[x] != '\0')
	{
		dest[n + x] = src[x];
		x++;
	}
	dest[n + x] = '\0';
}
