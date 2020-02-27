#include "holberton.h"
 /**
   * _sqrt_recursion - finds natural sqr
   * @n: int
   * return: int
   */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (cuadrado(n, 1));
}

/**
  * cuadrado - auxiliar
  * @n: int
  * @i: int
  * return: int
  */

int cuadrado(int n, int i)
{
	if (n == i * i)
		return (i);
	if (n > (i * i))
		return (cuadrado(n, i + 1));
	else
		return (-1);
}
