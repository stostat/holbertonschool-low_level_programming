#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - prints name function
  * @argc: int
  * @argv: char
  * Return: int
  */

int main(int argc, char *argv[])
{
	int i;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	return (0);
}
