#include "lists.h"

/**
 * get_dnodeint_at_index - returns a node at a given index
 * @head:  pointer to the head of the list
 * @index: index number
 * Return: node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *temp = NULL;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	temp = *h;
	if (idx == 0)
	{
		temp = add_dnodeint(h, n);
		free(new);
		return (temp);
	}
	while (i++ < idx - 1 && temp)
	{
		temp = temp->next;
		if (temp->next == NULL && i == idx)
			add_dnodeint_end(h, n);
		else if (!temp->next && i < idx)
			return (NULL);
	}
	new->next = temp->next;
	new->prev = temp->prev;
	temp->next = new;
	return (new);
}