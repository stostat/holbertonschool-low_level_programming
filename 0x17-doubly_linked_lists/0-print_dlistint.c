#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function that prints a doubly linked list
 * @h: pointer to the header
 * Return: integer
 */
size_t print_dlistint(const dlistint_t *h)
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
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
