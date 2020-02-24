#include "holberton.h"

/**
 * _strpbrk - check the code for Holberton School students.
 * @s: char
 * @accept: char
 * Return: char.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int k = 0;

	while (accept[i] != '\0')
	{
		i++;
	}
	while (*s != '\0')
	{
		for (k = 0; k <= i; k++)
		{
			if (accept[k] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
