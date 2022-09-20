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
	int i = 0;
	int count = 1;
	if (n < 0)
		n =0;
	if (n > 0)
	{
		do 
		{
			printf("%d, ", a[i]);
			i++;
			count++;
		} while (a[i] != '\0' && count < n);
		printf("%d\n", a[i]);
	}
}
