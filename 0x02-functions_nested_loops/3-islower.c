#include "main.h"

/**
 * islower - print 1 for lower and 0 for upper
 *
 * Return: return 1 if c is lower
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
