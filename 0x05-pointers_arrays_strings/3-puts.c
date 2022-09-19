#include <stdio.h>
#include "main.h"

/**
 * _puts - function that print string
 * @str: string 
 * Return: nothing(void)
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	puts('\n');
