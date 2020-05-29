#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of the table
 * Return: Pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	unsigned int i;

	if (size != 0)
		ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;

	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
