#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at index
 * @head: points to the next node
 * @idx: index where new node gets inserted
 * @n: number into node
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head, *newNode;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (!*head && idx > 0)
			return (free(newNode), NULL);
	if (idx == 0)
	{
		newNode->next = (*head);
		*head = newNode;
		return (newNode);
	}
	for (i = 0; i < idx - 1; i++)
	{
		ptr = ptr->next;
		if (!ptr)
			return (free(newNode), NULL);
	}
		newNode->next = ptr->next;
		ptr->next = newNode;
		return (newNode);
}
