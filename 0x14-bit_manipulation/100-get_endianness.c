#include "holberton.h"

/**
 * get_endianness - checks for big or little endian
 * Return: int
 */
int get_endianness(void)
{
	int i = 1;

	return (*(char *)&i);
}
