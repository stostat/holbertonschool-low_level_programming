#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 *_calloc - allocate memory for an array usingmalloc
 * @nmemb: int
 * @size: int
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_setzer(ptr, 0, (nmemb * size));
	return (ptr);
}

/**
 *_setzer - sets first n bytes of the memory area
 * @s: array
 * @b: set
 * @n: int
 * Return: char
 */

char *_setzer(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
