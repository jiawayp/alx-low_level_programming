#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - return element in a linked dlistint_t list
 * @h: head of nodes
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		++len;
		h = h->next;
	}
	return (len);
}
