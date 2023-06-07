#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list_t list
 * @head: pointer to first element in the list
 * @n: data to insert in the new element
 *
 * Return: address of new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *neew;
	listint_t *temp = *head;

	neew = malloc(sizeof(listint_t));
	if (!neew)
		return (NULL);

	neew->n = n;
	neew->next = NULL;

	if (*head == NULL)
	{
		*head = neew;
		return (neew);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = neew;

	return (neew);
}
