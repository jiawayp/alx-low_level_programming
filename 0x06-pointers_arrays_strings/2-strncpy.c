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
	int i = 0;
	int j = 0;

	while (src[j])
		j++;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
}
