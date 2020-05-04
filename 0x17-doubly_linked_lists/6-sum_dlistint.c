#include "lists.h"

/**
 * get_dnodeint_at_index - returns a node at a given index
 * @head:  pointer to the head of the list
 * @index: index number
 * Return: node
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	if (!node)
		return (0);
	while (node)
	{
		sum = sum + node->n;
		node = node->next;
	}
	return (sum);
}