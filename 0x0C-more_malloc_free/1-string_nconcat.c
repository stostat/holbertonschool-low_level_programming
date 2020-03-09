#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"


/**
 * *string_nconcat - function
 * @s1: char
 * @s2: char
 * @n: int
 * Return: char
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr, *spc;
	unsigned int i, j;

	spc = "";
	if (s1 == NULL)
		s1 = spc;
	if (s2 == NULL)
		s2 = spc;
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	ptr = malloc((i + (n * sizeof(*s2) + 1) * sizeof(*ptr)));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < n; j++, i++)
		ptr[i] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}
