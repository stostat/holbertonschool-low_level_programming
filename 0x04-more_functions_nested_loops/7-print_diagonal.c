#include "holberton.h"

/**
  * print_diagonal - as the function says
  * @n: Integer
  * Return: Integer
  */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 0 ; a < n ; a++)
		{
			b = 0;
			while (b != a)
			{
				_putchar(' ');
				b = b + 1;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
