#include "main.h"
#include <stdio.h>

/**
 * print_array - function prints n element of an array
 * @a: array of int
 * @n: number of items
 * Return: void
 */

void print_array(int *a, int n)
{
	int s;

	s = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[s]);
		if (n > 0)
			printf(", ");
	}
	printf("\n");
}
