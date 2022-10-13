#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings, followed by a newline
 * @separator: string to be printed
 * @n: number of argument
 * @...: string to print
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i = 0;
	char *p;

	va_start(vlist, n);
	while (i < n)
	{
		p = va_arg(vlist, char*);
		if (p == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
		}
		i++;
		if (i < n && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(vlist);
	putchar(10);
}
