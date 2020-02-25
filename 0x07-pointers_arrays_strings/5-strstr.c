#include "holberton.h"
/**
 * _strstr - check the code for Holberton School students.
 * @haystack: char
 * @needle: char
 * Return: char.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *pajar = haystack;
		char *aguja = needle;

		while ((*aguja == *haystack) &&
				(*aguja != '\0') &&
				(*haystack != '\0'))
		{
			haystack++;
			aguja++;
		}
		if (*aguja == '\0')
			return (pajar);
		haystack = pajar + 1;
	}
	return (0);
}
