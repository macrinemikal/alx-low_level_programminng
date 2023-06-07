#include "lists.h"

/**
 * find_listint_loop - finds loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fasst = head;

	if (!head)
		return (NULL);

	while (slow && fasst && fasst->next)
	{
		fasst = fasst->next->next;
		slow = slow->next;
		if (fasst == slow)
		{
			slow = head;
			while (slow != fasst)
			{
				slow = slow->next;
				fasst = fasst->next;
			}
			return (fasst);
		}
	}

	return (NULL);
}
