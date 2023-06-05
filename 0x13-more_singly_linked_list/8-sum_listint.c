#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum, returns 0 if list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tempp = head;

	while (tempp)
	{
		sum += tempp->n;
		tempp = tempp->next;
	}

	return (sum);
}
