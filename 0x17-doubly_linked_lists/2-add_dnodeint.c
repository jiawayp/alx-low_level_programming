#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - add new node at the beginning of a dlisint_t list
 * @head: head of node os a double linked list
 * @n: number of place of node
 * Return: the address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL;
	dlistint_t *n_node = NULL;

	if (!head)
		return (NULL);
	n_node = malloc(sizeof(dlistint_t));
	if (!n_node)
		return (NULL);
	n_node->n = n;
	n_node->prev = NULL;

	temp = *head;
	*head = n_node;
	n_node->next = temp;
	if (temp != NULL)
		temp->prev = *head;
	return (n_node);
}
