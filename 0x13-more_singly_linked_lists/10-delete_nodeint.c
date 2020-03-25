#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: points to the next node
 * @index: index where new node gets deleted
 * Return: pointer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head, *delete;
	unsigned int i;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	else
	for (i = 0; ptr ; i++)
	{
		if (i == index - 1)
		{
			delete = ptr;
			delete = delete->next;
			ptr->next = delete->next;
			free(delete);
			return (1);
		}
		ptr = ptr->next;
	}
	return (-1);

}
