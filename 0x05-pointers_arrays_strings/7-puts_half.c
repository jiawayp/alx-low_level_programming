#include "main.h"

/**
 * puts_half - function that print half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, max;

	i = 0;
	for (i = 0; str[i] != '\0'; i++);
	max = i;
	j = max / 2;
	for (j = max / 2; j <= max; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
