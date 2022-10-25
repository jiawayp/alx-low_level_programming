#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index of a list
 * @head: pointer to the first element
 * @index: number to be deleted
 * Return: 1 if sucess or -1 if fail.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *n_node;

	i = 0;
	temp = *head;
	if (!head || !(*head))
		return (-1);
	while (i < index - 1 && temp != NULL && index != 0)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
		return (-1);
	if (index == 0)
	{
		n_node = temp->next;
		free(temp);
		*head = n_node;
	}
	else
	{
		if (!(temp->next))
			n_node = temp->next;
		else
			n_node = temp->next->next;
		free(temp->next);
		temp->next = n_node;
	}
	return (1);
}
