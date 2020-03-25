#include "lists.h"

/**
 * reverse_listint - deletes node at index
 * @head: points to the next node
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = *head, *curr;

	if (!*head)
		return (NULL);
	while (head)
	{
		curr = prev->next;
		prev->next = curr->next;
		prev->next = *head;
		*head = curr;
	}
	return (*head);
}
