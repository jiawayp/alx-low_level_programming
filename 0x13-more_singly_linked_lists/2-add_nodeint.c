#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of listint_t
 * @head: pointer at the beginningof the list
 * @n: number to add a node
 * Return: The address of the new element, or Null if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	if (!head)
		return (NULL);
	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	if (*head != NULL)
	{
		n_node->next = *head;
	}
	else
	{
		n_node->next = NULL;
	}
	n_node->n = n;
	*head = n_node;

	return (*head);
}
