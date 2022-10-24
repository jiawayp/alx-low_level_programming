#include "lists.h"

/**
 * listint_len - return the number of element in a linked list
 * @h: pointer
 * Return: Length of list
 */

size_t listint_len(const listint_t *h)
{
	size_t count_node;

	if (!h)
		return (0);
	for (count_node = 0; h != NULL; count_node++)
	{
		h = h->next;
	}
	return (count_node);
}
