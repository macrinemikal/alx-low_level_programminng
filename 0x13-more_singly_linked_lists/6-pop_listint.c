#include "lists.h"

/**
 * pop_listint - deletes the head node of a listn_t list
 * @head: pointer to the first element in the listn_t list
 *
 * Return: returns the head node’s data (n),
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
