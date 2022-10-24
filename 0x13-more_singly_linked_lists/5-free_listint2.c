#include "lists.h"

/**
 * free_listint2 - free a listint_t list
 * @head: Pointer to first element
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if ((!head) || !(*head))
		return;
	for (; (*head)->next != NULL; *head = temp)
	{
		temp = (*head)->next;
		free(*head);
	}
	free(*head);
	*head = NULL;
}
