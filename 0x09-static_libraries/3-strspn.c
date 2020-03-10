#include "holberton.h"
/**
 * _strspn - check the code for Holberton School students.
 * @s: char
 * @accept: char
 * Return: int.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int br;
	unsigned int count = 0;

	while (accept[i] != '\0')
	{
		i++;
	}

	while (*(s + j) != '\0')
	{
		br = 0;
		for (k = 0; k <= i; k++)
		{
			if (accept[k] == s[j])
			{
				br = 1;
				count++;
			}
		}
		if (br == 1)
			j++;
		else
			break;
	}
	return (count);
}
