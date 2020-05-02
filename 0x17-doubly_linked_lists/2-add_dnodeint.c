#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - function that adds a node to the head
 * @head: double pointer to the head of the list
 * @n: data inserted in the node
 * Return: pointer to the head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!head)
	{
		*head = new;
		new->next = NULL;
		return (*head);
	}
	new->next = *head;
	*head = new;
	return (*head);
}
