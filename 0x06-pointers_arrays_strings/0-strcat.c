#include "holberton.h"
/**
 * _strcat - check the code for Holberton School students.
 * @dest: char1
 * @src: char 2
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char *str;
	int count1 = 0;
	int count2 = 0;

	while (dest[count1] != '\0')
	{
		count1++;
	}
	while (src[count2] != '\0')
	{
		dest[count1] = src[count2];
		count1++;
		count2++;
	}
	str = dest;
	return (str);
}
