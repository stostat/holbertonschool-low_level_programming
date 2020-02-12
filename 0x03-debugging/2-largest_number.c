#include "holberton.h"

/**
 * largest_number - returns the largest number
 * @a: integer
 * @b: integer
 * @c: integer
 * Return: l
 */

int largest_number(int a, int b, int c)
{
int l;
if (a > b && a > c)
{
l = a;
}
else if (b > a || b > c)
{
l = b;
}
else
{
l = c;
}
return (l);
}
