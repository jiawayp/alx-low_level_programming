#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that get the length of a prefix substring
 * @s: string that need searching
 * @accept: bytes for the search
 * Return: number of bytes of s which only hace byte from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i  = 0;
	unsigned int j = 0;
	unsigned int x_checker = 0;
	unsigned int x_count = 0;

	while (s[i] != '\0')
	{
		j = 0;
		x_checker = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				x_count++;
				x_checker = 1;
				break;
			}
			j++;
		}
		if (x_checker == 0)
		{
			return (x_count);
		}
		i++;
	}
	return (x_count);
}
