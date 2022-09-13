#include<stdio.h>
#include "main.h"
/**
 * main-entry: entry for the program
 *
 * Descriptions: print _putchar tothe screen
 *
 * Return: return 0 (sucess)
 */
int main(void)
{
	char x[8] = '_putchar';
	int y = 0;

	for (y = 0; y < 9; y++)
	{
		_putchar(y[x]);
	}
	_putchar('\n');

	return;
}
