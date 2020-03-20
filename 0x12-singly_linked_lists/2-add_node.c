#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: double pointer
 * @str: const char
 * Return: Pointer
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t node = 0;
	list_t *newPtr = NULL;

	if (!head)
		return (NULL);

	newPtr = malloc(sizeof(list_t));
	if (!newPtr)
		return (NULL);

	while (str[node])
		node++;

	newPtr->str = strdup(str);
	newPtr->len = node;
	newPtr->next = *head;
	*head = newPtr;

	return (*head); 
}
