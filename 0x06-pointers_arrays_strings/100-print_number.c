#include "holberton.h"
/**
 * print_number - Checks for digits
 * @n: int
 * Return: void.
 */
void print_number(int n)
{
	int i = n;

	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}
	if ((i / 10) > 0)
		print_number(i / 10);
	_putchar((i % 10) + '0');
}
