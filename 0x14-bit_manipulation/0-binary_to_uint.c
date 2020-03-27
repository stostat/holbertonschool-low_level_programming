#include "holberton.h"
/**
 * binary_to_uint - BINARY TO UNSIGNED INT
 * @b - char
 * Return: int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		res = (res << 1) + (*b++ - '0');
	}
	return (res);
}


