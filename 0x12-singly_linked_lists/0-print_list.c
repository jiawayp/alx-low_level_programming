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

	if (h == NULL)
	{
		return (0);
	}
	for (a = 1; h->next != NULL; a++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (a);
}
