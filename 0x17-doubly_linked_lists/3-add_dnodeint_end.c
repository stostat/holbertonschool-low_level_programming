#include "lists.h"

/**
 * add_dnodeint_end - function that adds a node to the end
 * @head: double pointer to the head of the list
 * @n: data inserted in the node
 * Return: pointer to the head
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = NULL, *temp = *head;

	last = malloc(sizeof(dlistint_t));
	if (!last)
		return (NULL);
	last->n = n;
	last->next = NULL;
	if (!*head)
	{
		*head = last;
		return (*head);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = last;
	last->prev = temp;
	return (*head);
}
