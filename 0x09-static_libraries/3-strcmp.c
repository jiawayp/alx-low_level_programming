#include "main.h"

/**
 * _strcmp - compare to strings
 * @s1: string 1
 * @s2: string 2
 * Return: int value
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	return (s1[i] - s2[i]);
}
