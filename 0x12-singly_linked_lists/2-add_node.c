#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list_t list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the neww element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *neww;
	unsigned int len = 0;

	while (str[len])
		len++;

	neww = malloc(sizeof(list_t));
	if (!neww)
		return (NULL);

	neww->str = strdup(str);
	neww->len = len;
	neww->next = (*head);
	(*head) = neww;

	return (*head);
}
