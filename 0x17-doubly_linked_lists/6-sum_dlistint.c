#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_dlistint - return the sum of all the data(n) of a dlistint_t linked list.
 * @head: head of double linked list
 * Return: 0
 */

int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
