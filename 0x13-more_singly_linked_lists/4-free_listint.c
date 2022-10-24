#include "lists.h"

/**
 * free_listint - free a listint_t list
 * @head: pointer to the element of listint_t list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (!head)
		return;
	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
