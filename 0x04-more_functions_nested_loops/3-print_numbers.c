#include "main.h"

/**
 * print_numbers - print number from 0 to 9
 *
 * Return: nothing (void)
 */

void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
