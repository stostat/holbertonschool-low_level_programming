#include "lists.h"
/**
 * sum_listint - Function that sums linked lists.
 * @head: points to the next node
 * Return: pointer to the head
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (!head)
		return (0);

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
