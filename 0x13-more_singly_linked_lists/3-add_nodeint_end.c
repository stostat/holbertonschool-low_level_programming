#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Function that places a node at the end.
 * @head: points to the next node
 * @n: integer
 * Return: pointer to the head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail = malloc(sizeof(listint_t));
	listint_t *temp;

	if (!tail)
		return (NULL);

	tail->n = n;
	tail->next = NULL;

	if (!*head)
		*head = tail;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = tail;
	}
	return (tail);
}
