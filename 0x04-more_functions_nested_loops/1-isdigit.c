#include "main.h"

/**
 * _isdigit - check for digit value
 * @c: character variable
 *
 * Return: 1 if digit, esle return 0
 */

int _isdigit(int c)
{
	if ((c >= '0') & (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
