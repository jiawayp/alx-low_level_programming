#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: c is a ascii charater
 *
 * Return: return 1 if c is lower or upper
 */

int _isalpha(int c)
{
	if ((c >= 'a') & (c <= 'z'))
	{
		return (1);
	}
	else if ((c >= 'A') & (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
