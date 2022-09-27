#include "main.h"
#include <stdio.h>

/**
 * _strchr - function point to the first occurance of a character in a string
 * @s: string to search for character in.
 * @c: character that is seacrh for.
 * Return: pointer to char or NULL.
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((s + i));
		i++;
	}
	if (c == '\0')
		return ((s + i));
	return (NULL);
}
