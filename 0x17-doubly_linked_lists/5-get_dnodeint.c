#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - return the nth of a dlistint_t list
 * @head: head of double linked list
 * @index: index of node starting from 0
 * Return: NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *present;
	unsigned int times = 0;

	if (head)
	{
		for (present = head; present != NULL; present = present->next)
		{
			if (times == index)
				return (present);
			times++;
		}
	}
	return (NULL);
}
