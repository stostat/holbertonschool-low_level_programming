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

	if (size != 0)
		p = malloc(size * sizeof(c));
	else
		return (NULL);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}

