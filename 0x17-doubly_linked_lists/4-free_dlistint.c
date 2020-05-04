#include "lists.h"

/**
 * free_dlistint - frees lists
 * @head:  pointer to the head of the list
 * Return: NULL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (head)
	{
		current = head;
		head = current->next;
		free(current);
	}
}
