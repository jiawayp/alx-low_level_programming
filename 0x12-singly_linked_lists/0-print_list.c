#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - print all element in a link list
 * @h: pointer to link list
 * Return: the total node in link list
 */

size_t print_list(const list_t *h)
{
	int a;

	a = 1;
	if (h == NULL)
	{
		return (0);
	}
	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		a++;
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (a);
}
