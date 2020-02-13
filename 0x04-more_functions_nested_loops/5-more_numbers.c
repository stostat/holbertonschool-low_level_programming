#include "holberton.h"

/**
  * more_numbers - checks for a character if uppercase
  * Return: void
  */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b < 15 ; b++)
		{
			if (b > 9)
				_putchar((b / 10) + 48);
			_putchar((b % 10) + 48);
		}
	_putchar('\n');
	}
}
