#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new space in the memory or null
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *str;

	i = 0;
	j = 0;

	if (s1 != NULL)
		for (i = 0; s1[i]; i++)
			;
	if (s2 != NULL)
		for (j = 0; s2[j]; j++)
			;
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
		return (NULL);
	k = 0;
	while (k < (i + j))
	{
		if (k < i)
		{
			str[k] = s1[k];
		}
		else
			str[k] = s2[k - i];
		k++;
	}
	str[k] = 0;

	return (str);
}
