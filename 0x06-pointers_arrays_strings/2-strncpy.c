#include "main.h"

/**
 * _strncpy - function that copy a string
 * @dest: The destination char
 * @src: The source char
 * @n: The copy int
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j = 0;

	while (src[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < j)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
