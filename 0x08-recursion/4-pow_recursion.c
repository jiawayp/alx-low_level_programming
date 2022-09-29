#include "main.h"

/**
 * _pow_recursion - Return the value of x to the power of y
 * @x: number that contain power
 * @y: The power
 * Return: the value of x to it's power
 */

int _pow_recursion(int x, int y)
{
	int outcome = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	outcome *= _pow_recursion(x, y - 1);

	return (outcome);
}
