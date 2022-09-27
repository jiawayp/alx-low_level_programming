#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of 2D array
 * @a: bad idea
 * @size: size of the array
 * Return: Nothing.
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2;
	int x, y;

	sum1 = 0;
	sum2 = 0;
	y = 0;
	for (x = 0; x < size; x++)
	{
		sum1 += *(a + x * size + y);
		sum2 += *(a + x * size + (size - 1 - y));
		y++;
	}
	printf("%d, %d\n", sum1, sum2);
}
