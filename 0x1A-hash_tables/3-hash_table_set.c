#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key.
 * @value: is the value associated with the key.
 * Return: 1 if succed 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL, *tmp = NULL;
	unsigned int i = 0;

	if (!ht || !key || !value)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp && strcmp(tmp->key, key))
		tmp = tmp->next;
	if (tmp)
	{
		free(tmp->value);
		tmp->value = strdup(value);
		return (1);
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		free(node);
		return (0);
	}
	node->next = ht->array[i];
	ht->array[i] = node;
	node->key = strdup(key);
	node->value = strdup(value);
	return (1);

}
