#include "holberton.h"
#include <stdio.h>

/**
  * fizz_buzz - prints depending the number
  * Return: void
  */

int main(void)
{
	int i;

	for (i = 1 ; i < 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		printf("FizzBuzz ");
		else if(i == 100)
			printf("Buzz");
		else if (i % 3 == 0)
		printf("Fizz ");
		else if (i % 5 == 0)
		printf("Buzz ");
		else
		printf("%i ", i);
	}
	printf("\n");
	return (0);
}
