#include "main.h"

/**
 * _strchar - locate character in a string
 * @s: pointer 
 * @c: character
 * Return: pointer to char or null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return ((s + i));
	}
	if (c == '\0')
		return ((s + i));
	return (NULL);
}
