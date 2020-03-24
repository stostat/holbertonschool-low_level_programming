#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees  a listint_t list
 * @head: pointer
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	if (!head)
		return;
	if (head)
	{
		free_listint2(&(*head)->next);
		free(*head);
	}
	*head = NULL;
}
