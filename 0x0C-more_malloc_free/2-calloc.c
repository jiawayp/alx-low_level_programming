#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - alloacte memory for an array
 * @nmemb: number of element
 * @size: size of bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a ==  NULL)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
