#include <stdio.h>
#include <stdlib.h>

/**
  * main - print its own opcodes
  * @argc: int
  * @argv: char
  * Return: int
  */

int main(int argc, char **argv)
{
	char *ptr = (char *) main;
	int i, j;


	if (argc != 2)
	{
		i = atoi(argv[1]);
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);

	if (i < 0)
	{
	printf("Error\n");
	exit(2);
	}
	else
	{
		for (j = 0; j < i; j++)
			printf("%02hhx ", ptr[j]);
	}
	printf("\n");
	return (0);
}
