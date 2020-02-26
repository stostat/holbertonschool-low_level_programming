#include "holberton.h"
#include <stdio.h>

/**
 * _puts_recursion - check the code for Holberton School students.
 * @s: char
 * Return: void.
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
		_puts_recursion(s + 1);
}
