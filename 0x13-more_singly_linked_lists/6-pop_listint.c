#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element
 * Return: 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (!head || !(*head))
		return (0);
	i = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (i);
}
