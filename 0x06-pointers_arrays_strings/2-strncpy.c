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

	for (i = 0; i < n && str[i] != '\0'; i++)
	{
		dest[i] = str[i];
	}
	dest[i] = '\0';

	return (dest);
}
