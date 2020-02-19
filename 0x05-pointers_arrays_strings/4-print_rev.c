#include "holberton.h"

/**
 * print_rev - prints in reverse
 * @s: Character
 * Return void
 */
void print_rev(char *s)
{
	int n;
	int i;

	while (s[n])
	{
		n++;
	}
	i = n - 1;

	for (; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
