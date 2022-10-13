#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name -  print a name
 * @name: pointer
 * @f: pointer to function
 * Return: nothin
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f)
	{
		f(name);
	}
}
