#include "main.h"

/**
 * rev_string - function that reverse string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int x, high, middle;

	char first, last;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	high = x - 1;
	middle = high / 2;

	while (middle >= 0)
	{
		first = s[high - middle];
		last = s[middle];
		s[middle] = first;
		s[high - middle] = last;
		middle--;
	}
}
