#include "hash_tables.h"

/**
 * key_index - find a key anr returns index 
 * @key: key char to be compared
 * @ size: size of table
 * Return: index of key or 0 if not found
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int i = 0, j = 0;

	while (key && key[i])
	{
		i = (i + key[j]) % size;
		j++;
	}
	return (i);
}
