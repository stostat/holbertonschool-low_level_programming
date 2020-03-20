#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: double pointer
 * @str: const char
 * Return: Pointer
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t node = 0;
	list_t *temp = NULL;
	list_t *tail = *head;

	if (!head)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);
	while (str[node])
		node++;
	temp->str = strdup(str);
	temp->len = node;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}

	while (tail->next != NULL)
		tail = tail->next;
	tail->next = temp;
	return (*head);

}

