#include "lists.h"

/**
 * get_dnodeint_at_index - returns a node at a given index
 * @head:  pointer to the head of the list
 * @index: index number
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	for (i = 0; i < index && (node->next); i++)
		node = node->next;
	if (!node->next)
		return (NULL);
	return (node);
}
