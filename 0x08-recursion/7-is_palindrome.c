#include "holberton.h"
#include <stdio.h>
/**
 * is_palindrome - check the code for Holberton School students.
 * @s: char
 * Return: int.
 */

int is_palindrome(char *s)
{
	int count;

	count = palnum(s);
	return (palcheck(s, count));
}

/**
 * palnum - check the code for Holberton School students.
 * @s: char
 * Return: int.
 */

int palnum(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + palnum(s + 1));
}

/**
 * palcheck - check the code for Holberton School students.
 * @s: char
 * @count: int
 * Return: int.
 */

int palcheck(char *s, int count)
{
	if (count <= 1)
		return (1);
	if (*s == *(s + count - 1))
		return (palcheck(s + 1, count - 2));
	else
		return (0);
}
