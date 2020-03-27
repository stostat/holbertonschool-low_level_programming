#include "holberton.h"
/**
 * set_bit - returns value of bit at ith index
 * @n: long int
 * @index: int
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	*n |= (1 << index);
	return (1);
}
