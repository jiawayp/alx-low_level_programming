#include "main.h"

/**
 * puts2 - function that print alternating char of string
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int a;

	a = 0;
	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
