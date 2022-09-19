#include "main.h"

/**
 * print_rev - function that print string backward
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (i = 0; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
