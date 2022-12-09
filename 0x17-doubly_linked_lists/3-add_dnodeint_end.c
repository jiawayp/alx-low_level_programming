#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - add a new node at the end of a dlistint_t list
 * @head: head of double linked list
 * @n: number of element of list
 * Return: the address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *present = NULL;
	dlistint_t *n_node = NULL;

	n_node = malloc(sizeof(dlistint_t));
	if (!n_node)
		return (NULL);
	n_node->n = n;
	if (*head)
	{
		for (present = *head; present->next != NULL; present = present->next)
			;
		n_node->next = NULL;
		n_node->prev = present;
		present->next = n_node;
		return (n_node);
	}
	n_node->next = *head;
	n_node->prev = NULL;
	*head = n_node;
	return (*head);
}
