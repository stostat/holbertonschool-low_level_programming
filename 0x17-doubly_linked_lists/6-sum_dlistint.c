#include "lists.h"

/**
 * sum_dlistint - sums all elements of a linked list
 * @head:  pointer to the head of the list
 * Return: sum of numbers
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
