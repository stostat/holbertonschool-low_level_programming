#include "holberton.h"

/**
*print_alphabet_x10 - Prints ten times the alphabet
*
*Return: always 0 (succes)
*/

void print_alphabet_x10(void)
{
	char n;
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
	for (n = 'a' ; n <= 'z' ; n++)
	{
	_putchar(n);
	}
	_putchar('\n');
	}
}
