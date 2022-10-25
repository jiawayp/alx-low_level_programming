#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a listint linked list
 * @head: Pointer to the first element of list
 * @index: index of the node
 * Return: NULL if the node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index)
	{
		if (!head)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
