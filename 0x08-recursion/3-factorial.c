#include "holberton.h"
#include <stdio.h>

/**
 * factorial - check the code for Holberton School students.
 * @n: int
 * Return: int.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n > 1)
		return (n * factorial(n - 1));
}
