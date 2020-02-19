#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - check the code for Holberton School students.
 * @s: char
 * Return: void
 */

void rev_string(char *s)
{
	int c = 0;
	int b = 0;
	int a;

	char reverse;

	while (s[c] != '\0')
		c++;
	a = c - 1;
	for (; a > b; a--)
	{
		reverse = s[a];
		s[a] = s[b];
		s[b] = reverse;
		b++;
	}
}
