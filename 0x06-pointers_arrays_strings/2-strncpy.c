#include "holberton.h"

/**
 * _strncpy - check the code for Holberton School students.
 * @dest: char1
 * @src: char 2
 * @n: int
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int countersrc = 0;

	while (*(src + countersrc) != '\0' && countersrc < n)
	{
		dest[countersrc] = src[countersrc];
		countersrc++;
	}
	for ( ; countersrc < n; countersrc++)
	{
		dest[countersrc] = '\0';
	}
	return (dest);
}
