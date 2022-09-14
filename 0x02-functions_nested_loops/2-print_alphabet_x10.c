#include "main.h"

/**
 * print_alphabet_x10 - print small letter 10 times
 *
 * Return: return void
 */

void print_alphabet_x10(void)
{
	char small_letters = 'a';
	int number_of_times = 0;

	while (number_of_times <= 9)
	{
		for (small_letters = 'a'; small_letters <= 'z'; small_letters++)
		{
			_putchar(small_letters);
		}
		number_of_times++;
		_putchar('\n');
	}
}
