#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Function that places a node at the beggining.
 * @head: points to the next node
 * @n: integer
 * Return: pointer to the head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
