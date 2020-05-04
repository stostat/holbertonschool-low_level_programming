#include "lists.h"

/**
 * add_dnodeint_end - function that adds a node to the end
 * @head: double pointer to the head of the list
 * @n: data inserted in the node
 * Return: pointer to the head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *next = NULL;

	while (current->prev)
	{
		next = current->prev;
		current = next;
	}
	while (current->next)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(current);
}