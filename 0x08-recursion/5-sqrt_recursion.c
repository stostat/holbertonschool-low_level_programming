#include "holberton.h"
/**
  * _sqrt_recursion - finds natural sqr
  * @n: int
  * Return: int
  */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (cuadrado(n, 1));
}

/**
  * cuadrado - auxiliar
  * @n: int
  * @i: int
  * Return: int
  */

int cuadrado(int n, int i)
{
	if (n == i * i)
		return (i);
	else if (n > (i * i))
		return (cuadrado(n, i + 1));
	else
		return (-1);
}
