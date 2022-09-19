#include "main.h"

/**
 * _strlen - function that return the len of a string
 * @s: string
 * Return: return the len of string
 */

int _strlen(char *s)
{
	int string_len = 0;

	while (s[string_len] != '\0')
	{
		string_len++;
	}

	return (string_len);
}
