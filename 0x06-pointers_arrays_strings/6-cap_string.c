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
		s[i] -= 32;
	}
	for (i = 1 ; s[i] != '\0'; i++)
	{
		if ((s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' || s[i - 1] ==  ',' || s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}' || s[i - 1] == ';') && (s[i] >= 97 && s[i] <= 122))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
i}
