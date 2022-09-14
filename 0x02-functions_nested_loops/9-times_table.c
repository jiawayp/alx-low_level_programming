#include "main.h"

/**
 * times_table - function prototype
 *
 * Descritpion: print the 9 times table
 *
 * Return: nothing (void)
 */

void times_table(void)
{
	int table_row, table_column, table1, table2, table_product;

	for (table_row = 0; table_row < 10; table_row++)
	{
		for (table_column = 0; table_column < 10; table_column++)
		{
			table_product = table_row * table_column;
			table1 = table_product / 10;
			table2 = table_product % 10;

			if (table_column == 0)
			{
				_putchar('0');
			}
			else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(table2 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(table1 + '0');
				_putchar(table2 + '0');
			}
		}
		_putchar('\n');
	}
}
