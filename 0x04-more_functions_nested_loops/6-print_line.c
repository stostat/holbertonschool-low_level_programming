#include "holberton.h"

/**
  * print_line - prints straight line
  * @n: Integer
  * Return: Void
  */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0 ; a <= n ; a++)
			_putchar('_');
		_putchar('\n');
	}
		else
	{
	_putchar('\n');
	}
}
