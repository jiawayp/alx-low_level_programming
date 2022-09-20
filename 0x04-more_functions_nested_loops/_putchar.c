#include <unistd.h>

/**
 * _putchar - write character c to output
 * @c: character
 * Return: success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
