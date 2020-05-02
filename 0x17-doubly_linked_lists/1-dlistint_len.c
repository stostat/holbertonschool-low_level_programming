#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function that prints a doubly linked list
 * @h: pointer to the header
 * Return: integer
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = NULL;
	size_t i = 0;

	if (!h)
		return (0);
	temp = h;
	while (temp->prev)
	{
		temp = temp->prev;
		i++;
	}
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
