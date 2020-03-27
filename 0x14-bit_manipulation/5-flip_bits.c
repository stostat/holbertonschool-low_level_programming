#include "holberton.h"
/**
 * flip_bits - counts number of bits to flip
 * @n: long int
 * @m: int
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x = n ^ m;
	int count = 0;

	while (x)
	{
		count += x & 1;
		x >>= 1;
	}
	return (count);
}
