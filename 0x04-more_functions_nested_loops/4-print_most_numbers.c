#include "main.h"

/**
 * print_most_numbers - prints the natural number execpt 2,4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int c = 48;

	while (c <= 57)
	{
		if ((c != 50) & (c != 52))
		{
			_putchar(c);
		}
		c++;
	}
	_putchar('\n');
}
