#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - check the code for Holberton School students.
 * @s: char
 * Return: Char.
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] >= 97 && s[0] <= 122)
	{
		s[0] -= 32;
	}
	for (i = 1 ; s[i] != '\0'; i++)
	{
		if (((s[i - 1] >= 9 && s[i - 1] <= 34) || (s[i - 1] >= 40 && s[i - 1] <= 46) || (s[i - 1] >= 59 && s[i - 1] <= 63) || (s[i - 1] >= 123 && s[i - 1] <= 125)) && (s[i] >= 97 && s[i] <= 122))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
