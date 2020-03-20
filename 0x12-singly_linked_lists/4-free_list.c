#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - adfunction that frees a list_t list.
 * @head: double pointer
 * Return: Void
 */void free_list(list_t *head)
if (head)
{
	free(head->str);
	free_list(head->next);
	free(head);
}

