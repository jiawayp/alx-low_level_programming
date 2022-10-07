#include "main.h"
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
	unsigned int i, j, k;
	int count;
	char *str;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		count = count + 1;
	str = malloc(sizeof(*str) * (count + n + 1));
	if (str == NULL)
		return (NULL);
	for (j = 0; s1[j] != '\0'; j++)
		str[j] = s1[j];
	for (k = 0; s2[k] != '\0' && k < n; k++, j++)
		str[j] = s2[k];
	str[j] = '\0';
	return (0);
}
