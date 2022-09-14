#include "main.h"

/**
 * _islower - print 1 for lower and 0 for upper
 *
 *@c: c is a ASCII character 
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
