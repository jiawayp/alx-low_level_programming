#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - return a pointer to new allocated string.
 * @str: allocation memory for string
 * Return: Pointer to Memory
 */

char *_strdup(char *str)
{
	int i, j;
	char *s;
	int count = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		count += 1;
	s = malloc(sizeof(char) * (count + 1));
	if (s == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		s[j] = str[j];
	s[j] = '\0';

	return (s);

}
