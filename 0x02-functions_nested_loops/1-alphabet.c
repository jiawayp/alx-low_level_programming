#include "main.h"
/**
 * main: entry of the program;
 *
 *Print_alphabet: out letter in lowercase
 *
 * Return: return void
 */
void print_alphabet(void)
{
	char lower_alph = 'a';
	

	for (lower_alph = 'a'; lower_alph <= 'z'; lower_alph++)
	{
		_putchar(lower_alph);
	}
	_putchar('\n');
}
