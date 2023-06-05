#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *neew;
	listint_t *tempp = *head;

	neew = malloc(sizeof(listint_t));
	if (!neew || !head)
		return (NULL);

	neew->n = n;
	neew->next = NULL;

	if (idx == 0)
	{
		neew->next = *head;
		*head = neew;
		return (neew);
	}

	for (k = 0; tempp && k < idx; k++)
	{
		if (k == idx - 1)
		{
			neew->next = tempp->next;
			tempp->next = neew;
			return (neew);
		}
		else
			tempp = tempp->next;
	}

	return (NULL);
}
