#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print all elements of listint_t list.
 * @h: pointer to a list
 * Return: The number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count;

	if (h == NULL)
	{
		return (0);
	}
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
