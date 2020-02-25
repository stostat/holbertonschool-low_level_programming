#include "holberton.h"
#include <stdio.h>
/**
 * _memset - check the code for Holberton School students.
 * @s: char
 * @b: char
 * @n: int
 * Return: char.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	while ( i < n)
	{
		s[i]= b;
		i++;
	}
	return (s);
}
