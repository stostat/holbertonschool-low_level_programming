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
	int change = 0;
	int coin = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error");
		return (1);
	}
	if (coin >= 0)
	{
		while (coin != 0)
		{
			if (coin >= 25)
			{
				coin -= 25;
				change++;
			}
			if (coin >= 10 && coin < 25)
			{
				coin -= 10;
				change++;
			}
			if (coin >= 5 && coin < 10)
			{
				coin -= 5;
				change++;
			}
			if (coin >= 2 && coin < 5)
			{
				coin -= 2;
				change++;
			}
			if (coin == 1)
			{
				coin -= 1;
				change++;
			}
		}
		printf("%d\n", change);
	}
	else
		printf("0\n");
	return (0);
}
