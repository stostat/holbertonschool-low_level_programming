#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - check the code for Holberton School students.
 * @s: char
 * Return: char
 */

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			s[i] = s[i] + 13;
		}
		else
		{
			while ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			{
				s[i] = s[i] - 13;
			}
		}
	}
	return (s);
}
