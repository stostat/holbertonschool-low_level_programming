#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - prints a grid of integers
 * @ac: the address of the two dimensional grid
 * @av: width of the grid
 *
 * Return: char.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len;
	int con = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}
	len++;
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[con] = av[i][j];
			con++;
		}
		str[con] = '\n';
		con++;
	}
	return (str);
}
