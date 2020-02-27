#include "holberton.h"
#include <stdio.h>

/**
 * is_prime_number - check the code for Holberton School students.
 * @n: int
 * Return: int.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n > 2)
		return (get_prime(n, 2, n / 2));
}

/**
 * get_prime - check the code for Holberton School students.
 * @n: int
 * @a: int
 * @lim: int
 * Return: int.
 */
int get_prime(int n, int a, int lim)
{
	if (n % a == 0 && a <=  lim)
		return (0);
	if (n % a != 0 && a <= lim)
		return (get_prime(n, a + 1, lim));
	else
		return (1);
}
