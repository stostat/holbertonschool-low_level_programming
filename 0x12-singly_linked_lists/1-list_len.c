#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer
 * Return: int
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		h = h->next;
		count ++;
	}
	return(count);
}
