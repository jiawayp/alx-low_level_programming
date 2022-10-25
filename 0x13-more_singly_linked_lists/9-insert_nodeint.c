#include "lists.h"
listint_t *new_node_list(int n);

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to first element
 * @idx: the index of the list where the new node should be added
 * @n: number to be inserted in the node
 * Return: The address of the new node or NULL if it fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp;
	listint_t *old;
	listint_t *new;

	i = 0;
	temp = *head;
	if (!head)
		return (NULL);
	new = new_node_list(n);
	if (!new)
		return (NULL);
	if (!(*head))
	{
		*head = new;
		return (new);
	}
	if (idx == 0)
		*head = new;
	while (i < idx - 1 && temp != NULL && idx != 0)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
		return (NULL);
	if (idx == 0)
		new->next = temp;
	else
	{
		old = temp->next;
		temp->next = new;
		new->next = old;
	}
	return (new);
}

/**
 * new_node_list - create a new node
 * @n: add to new node
 * Return: a pointer to a node
 */

listint_t *new_node_list(int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	return (new);
}
