#include "main.h"
/**
 *print_alphabet: entry point for program
 *
 *Description: print out small letters
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
