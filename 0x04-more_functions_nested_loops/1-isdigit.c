#include "main.h"

/**
 * _isdigit - function prototype 
 * @c: checked for digital number
 *
 * Return: 1 if digit, else return 0
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
