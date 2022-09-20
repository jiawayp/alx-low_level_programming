#include "main.h"

/**
 * puts_half - function that print half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int max;

	for (max = 0; *str != '\0'; max++)
	{
		str++;
	}

	str -= (max / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
