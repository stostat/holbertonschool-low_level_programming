#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - prints name function
  * @argc: int
  * @argv: char
  * Return: int
  */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int k;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			k += atoi(argv[i]);
		}
		printf("%d\n", k);
		return (0);
}
