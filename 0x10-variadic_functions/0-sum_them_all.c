#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of argument
 * @...: list of argument
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum_list;
	unsigned int i = 0;
	int total = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(sum_list, n);
	total = 0;
	while (i < n)
	{
		total += va_arg(sum_list, int);
		i++;
	}
	va_end(sum_list);
	return (total);
}
