#include "lists.h"
listint_t *new_node(const int n);

/**
 * add_nodeint_end - add new node to the end of listint
 * @head: pointer to beginning of list
 * @n: number to add the node
 * Return: the address of the new elemnt, or Null if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	n_node = new_node(n);
	if (n_node == NULL)
		return (NULL);
	if (!(*head))
	{
		*head = n_node;
		return (*head);
	}
	for (temp = *head; temp->next != NULL; temp = temp->next)
		;
	temp->next = n_node;
	return (*head);
}

/**
 * new_node - create a node
 * @n: value for the node
 * Return: pointer to the beginning of the list
 */

listint_t *new_node(const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;

	return (n_node);
}
