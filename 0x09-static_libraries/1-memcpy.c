#include "holberton.h"
#include "holberton.h"
/**
 * _memcpy - check the code for Holberton School students.
 * @dest: char
 * @src: char
 * @n: int
 * Return: char.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
