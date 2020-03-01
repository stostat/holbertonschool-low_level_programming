
#include "holberton.h"
/**
 * _strcpy - Copy string from src to dst
 * @src: char
 * @dest: char
 * Return: Char
 */
char *_strcpy(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (src[b] != '\0')
		b++;
	while (a <= b)
	{
		dest[a] = src[a];
		a++;
	}

	return (dest);
}
