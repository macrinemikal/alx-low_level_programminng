#include "lists.h"

/**
 * dlistint_len - returns no of elements in a linked dlistint_t list.
 * @h: Head of the dlistint_t list.
 *
 * Return: No of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
