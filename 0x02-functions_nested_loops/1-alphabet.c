#include "main.h"

/**
 * print_alphabet - print out alphabet in small letter
 *
 * Return: return void
 */

void print_alphabet(void)
{
	char small_letters = 'a';

	for (small_letters = 'a'; small_letters <= 'z'; small_letters++)
	{
		_putchar(small_letters);
	}
	_putchar('\n');
}
