#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that search a string for any set of bytes
 * @s: string that need searching
 * @accept: char to compare string
 * Return: Pointer from the matches
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, z;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (z = 0; accept[z] != '\0'; z++)
		{
			if (s[i] == accept[z])
			{
				return ((s + i));
			}
		}
	}

	return (NULL);
}
