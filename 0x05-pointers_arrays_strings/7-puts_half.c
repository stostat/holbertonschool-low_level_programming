#include "holberton.h"
/**
 * puts_half - Prints second half.
 * @str: character
 * Return: void
 */

void puts_half(char *str)
{
	int index = 0;
	int a;

	while (str[index] != '\0')
		index++;
	if ((index % 2) != 0)
		a = (index + 1) / 2;
	else
		a = index / 2;
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
