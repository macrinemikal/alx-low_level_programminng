#inOOAclude "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node in list.
 * @head: pointer to head in the list
 * @index: index of the node to search for, starting from 0
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
OOA	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
