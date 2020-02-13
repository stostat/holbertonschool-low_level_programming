#include "holberton.h"

/**
  * print_triangle - checks for a character if uppercase
  * @size: Integer
  * Return: Integer
  */

void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size > 0)
	{
		for (a = 0 ; a < size ; a++)
		{
			for (b = 0 ; b < size ; b++)
			{
				c = size - a - 1;
				if (b < c)
					putchar(' ');
				else
				{
					putchar('#');
				}
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
