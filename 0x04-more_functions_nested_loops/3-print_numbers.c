#include "main.h"

/**
 * print_numbers - print number from 0 to 9
 *
 * Return: nothing (void)
 */

void print_numbers(void)
{
	int c;
	c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
