#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints integers from an array
 * @a: array
 * @n: integer
 * Return: Void
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
