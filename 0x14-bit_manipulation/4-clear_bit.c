#include "holberton.h"
/**
 * clear_bit - returns value of bit at ith index
 * @n: long int
 * @index: int
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index);
{
	if (index > (sizeof(n) * 8))
		return (-1);
	*n &= (~(1 << pos));
	return (*n);
}
