#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listn_t list
 * @head: pointer to first node in the listn-t list
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *neew;

	neew = malloc(sizeof(listint_t));
	if (!neew)
		return (NULL);

	neew->n = n;
	neew->next = *head;
	*head = neew;

	return (neew);
}
