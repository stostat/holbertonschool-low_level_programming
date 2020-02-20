#include "holberton.h"

/**
 * _strncmp - check the code for Holberton School students.
 * @s1: char1
 * @s2: char 2
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i=0; *(s1 + i) != '\0'; i++)
	{
		if (*(s1 + i) > *(s2 + i))
			return (*(s1 + i) - *(s2 + i));
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
	}
}
