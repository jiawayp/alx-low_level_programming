#include <unistd.h>

/**
 * _putchar - output to screeb
 * @c: character
 * Return: 1 success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
