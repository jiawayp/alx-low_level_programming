#include "main.h"

/**
 * _isupper - prototype function
 * @c: check for upper
 *
 * Return: return 1 if c is upper, and 0 if not
 */

int _isupper(int c)
{
	if ((c >= 'A') & (c <= 'Z'))
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
