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
	int change = 0, coin = atoi(argv[1]);

	if (argc == 2)
	{
		if (coin > 0)
		{
			while (coin != 0)
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
		}
		else
		printf("0\n");
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
