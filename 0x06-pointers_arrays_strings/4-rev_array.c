#include <stdio.h>
#include "main.h"

/**
 * reverse_array - function that reverse an array
 * @a: integer array
 * @n: element in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int a_half = n / 2;
	int a_left, a_right;
	int i = 0;

	n -= 1;

	while (i < a_half)
	{
		a_left = a[n - i];
		a_right = a[i];
		a[i] = a_left;
		a[n - i] = a_right;
		i++;
	}
}
