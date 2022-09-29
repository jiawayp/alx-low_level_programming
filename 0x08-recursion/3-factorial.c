#include "main.h"

/**
 * factorial - function
 * @n: integer of factorial
 * Return: -1 if n < 0 or n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= n)
		return (1);
	return (n * factorial(n - 1));
}
