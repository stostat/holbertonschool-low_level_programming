#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 *_realloc - function
 *@ptr: char
 *@old_size: int
 *@new_size: int
 *Return: pvoid
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *re_ptr;

	if (ptr == NULL)
	{
		re_ptr = malloc(new_size);
		if (re_ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (re_ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	re_ptr = malloc(new_size);
	if (re_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		_memcpy(re_ptr, ptr, old_size);
	free(ptr);
	return (re_ptr);
}

/**
 * _memcpy - copies n bytes form the memory area src
 * to memory area dest
 * @src: char
 * @dest: char
 * @n: int
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
