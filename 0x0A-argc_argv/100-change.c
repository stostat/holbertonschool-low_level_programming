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
	int change = 0, coin;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coin = atoi(argv[1]);

	while (coin > 0)
	{
		if (coin >= 25)
			coin -= 25;
		else if (coin >= 10 && coin < 25)
			coin -= 10;
		else if (coin >= 5 && coin < 10)
			coin -= 5;
		else if (coin >= 2 && coin < 5)
			coin -= 2;
		else if (coin == 1)
			coin -= 1;
		change++;
	}
	printf("%d\n", change);
	return (0);
}
