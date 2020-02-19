#include "holberton.h"

/**
 * _puts - prints string character by character
 *@str: char
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
