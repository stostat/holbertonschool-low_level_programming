#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"


/**
 * str_concat - prints buffer in hexa
 * @s1: char
 * @s2: char
 *
 * Return: Char
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	char *p;
	char *q;

	q = "";
	if (s1 == NULL)
		s1 = q;
	if (s2 == NULL)
		s2 = q;
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	j++;
	p = malloc((i + j) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		p[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		p[i] = s2[k];
		i++;
	}
	return (p);
}
