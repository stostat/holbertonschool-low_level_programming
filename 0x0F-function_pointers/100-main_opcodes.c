#include <stdio.h>
#include <stdlib.h>

/**
  * main - print its own opcodes
  * @argc: int
  * @argv: char
  * Return: int
  */

int main(int argc, int *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1)
	}
	if (atoi(argv[1] < 0))
	{
	printf("Error\n");
	exit(2);
	}
	return (0);
}
