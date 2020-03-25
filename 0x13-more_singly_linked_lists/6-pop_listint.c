#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head
 * node of a listint_t linked list, and returns the head node’s data (n).
 * @head: pointer
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;

	if (!*head)
		return (0);

	n = temp->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
