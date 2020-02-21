#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - check the code for Holberton School students.
 * @s: char
 * Return: char
 */

char *rot13(char *s)
{
	int count;

	count = 0;

	while ( s[count] != '\0')
	{
		if ((s[count] >= 'a' && s[count] <= 'm') || (s[count] >= 'A' && s[count] <= 'M'))
		{
			s[count] = (s[count] + 13);
		}
		else
		{
			while ((s[count] >= 'n' && s[count] <= 'z') || (s[count] >= 'N' && s[count] <= 'Z'))
			{
				s[count] = (s[count] - 13);
			}
		}
		count++;
	}
	return (s);
}
