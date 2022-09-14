#include "main.h"

/**
 * print_sign - of numbers
 *
 * Descriptions - print +, - or 0 
 *
 * Return -1, 0, or -1
 */

int print_sign(int n)
{
	if ( n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
