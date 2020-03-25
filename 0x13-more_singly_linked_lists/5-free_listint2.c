#include "lists.h"

/**
 * free_listint2 - frees  a listint_t list
 * @head: pointer
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *last;

	if (!head)
		return;
	while (*head)
	{
		last = *head;
		*head = (*head)->next;
		free(last);
	}
	*head = NULL;
}
