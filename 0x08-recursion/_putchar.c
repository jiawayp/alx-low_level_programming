#include <unistd.h>

/**
 * _putchar - output to screen
 * @c: character
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
