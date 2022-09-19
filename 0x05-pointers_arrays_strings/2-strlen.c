#include "main.h"

/**
 * _strlen - function that return the len of a string
 * @s: string
 * Return: return the len of string
 */

int _strlen(char *s)
{
	int len = 0;

	do
	{
		len++;
	} while (s[len] != '\0');

	return (len);
}
