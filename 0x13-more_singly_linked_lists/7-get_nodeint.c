# include "lists.h"

/**
 * get_nodeint_at_index - prints at index
 * @head: pointer
 * @index: number of index that will be returned
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	ptr = head;

	while (ptr && i < index)
		ptr = ptr->next, i++;
	return (ptr);
}
