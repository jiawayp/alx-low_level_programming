#include <unistd.h>

/**
 * _putchar - print out to stdout
 * @c: character
 * Return: sucess 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
