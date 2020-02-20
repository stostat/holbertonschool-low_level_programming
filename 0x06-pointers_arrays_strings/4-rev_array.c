#include "holberton.h"
/**
 * reverse_array - check the code for Holberton School students.
 * @a: int
 * @n: int 2
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int c = n - 1;
	int b = 0;
	int *reverse;

	for ( ; c > b; c--)
	{
		reverse = a[c];
		a[c] = a[b];
		a[b] = reverse;
		b++;
	}
}
