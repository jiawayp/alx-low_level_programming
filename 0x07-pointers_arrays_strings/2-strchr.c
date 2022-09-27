#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locate a character in a string
 * @s: string Pointer
 * @c: The character 
 * Return: C if it is found, or Null if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
