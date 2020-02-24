#include "holberton.h"
/**
 * _strchr - check the code for Holberton School students.
 * @s: char
 * @c: char
 * Return: char.
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		return (s);
	}
	if (*s == c)
		return (s);
	return (0);
}
