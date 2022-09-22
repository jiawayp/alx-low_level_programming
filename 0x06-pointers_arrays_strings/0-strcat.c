#include "main.h"

/**
 * _strcat - function that concatenates two stings
 * @dest: destination char
 * @src: source character
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{

	int x, n;

	for (n = 0; dest[n] != '\0'; n++);
	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[n + x] = src[x];
	}
	dest[n + x] = '\0';

	return (dest);
}
