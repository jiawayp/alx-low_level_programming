#include "main.h"

/**
 * print_last_digit = function prototype for last digit
 *
 * @n: is an integer
 *
 * Descritpion: print the last digit of a number
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (n < 0)
	{
		lastdigit = lastdigit * -1;
	}
	_putchar(lastdigit + '0');

	return (lastdigit);
}
