#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - prints buffer in hexa
 * @str: char
 *
 * Return: Char
 */

char *_strdup(char *str)
{
	int i;
	int j;
	char *p;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	i++;
	p = malloc(i * sizeof(char));
	if (!p)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		p[j] = str[j];
	}
	return (p);
}
