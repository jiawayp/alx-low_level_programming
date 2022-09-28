#include <unistd.h>

/**
 * _putchar - print stdout 
 * @c: character
 * Return: success (1)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
