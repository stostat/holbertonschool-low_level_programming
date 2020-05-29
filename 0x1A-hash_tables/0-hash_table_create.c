#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of the table
 * @return: Pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t) * 1);
	ht->array = malloc(sizeof(hash_node_t*) * size);
	unsigned int i = 0;

	for(; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	return(ht);
}