#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dlistint - free a dlistint_t list
 * @head: head of double linked list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next = NULL;
	dlistint_t *present;

	for (present = head; present != NULL; present = next)
	{
		next = present->next;
		free(present);
	}
}
