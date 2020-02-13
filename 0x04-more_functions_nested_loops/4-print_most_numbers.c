#include "holberton.h"

/**
  * print_most_numbers - checks for a character if uppercase
  * Return: void
  */

void print_most_numbers(void)
{
	int i;
	char c[8] = "01356789";

	i = 0;
	while (i <= 8)
	{
	_putchar(c[i]);
	i = i + 1;
	}
	_putchar('\n');
}
