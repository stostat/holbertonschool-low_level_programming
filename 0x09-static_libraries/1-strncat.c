#include "holberton.h"

/**
 * _strncat - check the code for Holberton School students.
 * @dest: char1
 * @src: char 2
 * @n: int
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	char *str;
	int count1 = 0;
	int count2 = 0;

	while (dest[count1] != '\0')
	{
		count1++;
	}
	while (count2 < n && src[count2] != '\0')
	{
		dest[count1] = src[count2];
		count1++;
		count2++;
	}
	str = dest;
	return (str);
}
