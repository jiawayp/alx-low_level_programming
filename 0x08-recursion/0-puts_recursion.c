#include "main.h"

/**
 * _puts_recursion - print a string, follow by newline
 * @s: string character
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_putchar((s + 1));
	}
}
