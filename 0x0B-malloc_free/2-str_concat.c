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

for (i = 0; s1[i] != '\0'; i++)
{}
for (j = 0; s2[j] != '\0'; j++)
{}
p = malloc((i + j) * sizeof(s1));

if (!p)
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
