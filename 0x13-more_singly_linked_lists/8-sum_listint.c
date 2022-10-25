#include "lists.h"

/**
 * sum_listint - return the sum of all the data(n)
 * @head: pointer to the first element
 * Return: o if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (!head)
		return (0);
	for (; head != NULL; head = head->next)
		sum = sum + head->n;
	return (sum);
}
