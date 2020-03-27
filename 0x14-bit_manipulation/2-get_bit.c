#include "holberton.h"
/**
 * get_bit - returns value of bit at ith index
 * @n - long int
 * @index: int
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	int bit = (n & (1 << index)) >> index;
	return (bit);
}
