#include "holberton.h"
/**
 * print_binary - BINARY TO UNSIGNED INT
 * @n: long int
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + 48);
}
