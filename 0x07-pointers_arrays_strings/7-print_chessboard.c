#include "main.h"

/**
 * print_chessboard - print a chessboard
 * @a: chessboard array
 * Return: void (nothing)
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i = 0;
	unsigned int j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
