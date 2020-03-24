#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a listint_t list.
 * @h: points to the next node
 * Return: Unsigned integer
 */

size_t print_listint(const listint_t *h)
{
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (0);
}
