#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"


/**
 * malloc_checked - function
 * @b: int
 * Return: void
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
