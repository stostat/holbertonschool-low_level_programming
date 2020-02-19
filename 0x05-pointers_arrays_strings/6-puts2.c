#include "holberton.h"
/**
 * puts2 - prints every other character
 * @str: char
 * Return: Void
 */

void puts2(char *str)
{
	int ind = 0;
	while (str[ind] != '\0')
	{
		_putchar(str[ind]);
		ind = ind + 2;
	}
	_putchar('\n');
}
