#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - prints buffer in hexa
 * @size: int
 * @c: char
 *
 * Return: Char
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *p;

	p = malloc(size * sizeof(c));

	if (!size)
		return (NULL);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}

