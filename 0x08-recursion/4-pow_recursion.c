#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion - check the code for Holberton School students.
 * @x: int
 * @y: int
 * Return: int.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	if (y > 1)
		return (x  *  _pow_recursion(x, y - 1));
	else
		return (0);
}
