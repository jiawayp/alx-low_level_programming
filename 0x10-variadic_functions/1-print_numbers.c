#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints number with newline
 * @separator: string to be printed between numbers
 * @n: number of argument
 * @...: arguments to print
 * Reurn: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;

	va_start(vlist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vlist, int));
		if (i < n && (separator))
		{
			printf("%s", separator);
		}
	}
	putchar(10);
	va_end(vlist);
}
