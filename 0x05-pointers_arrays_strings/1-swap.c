#include "main.h"

/**
 * swap_int - function that swap two integers
 * @a: first pointer int
 * @b: second pointer int
 * Return: nothing(void)
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
