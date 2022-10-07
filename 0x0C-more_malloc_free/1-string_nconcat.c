#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: integer
 * Return: pointer to new place in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, count;
	char *str;

	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		count += count;
		i++;
	}
	str = malloc(sizeof(*str) * (count + n + 1));
	if (str == NULL)
		return (NULL);
	while (s1[j] != '\0')
	{
		str[j] = s1[j];
		j++;
	}
	k = 0;
	while (s2[k] != '\0' && k < n)
	{
		str[j] = s2[k];
		k++;
		j++;
	}
	str[j] = '\0';
	return (0);
}
