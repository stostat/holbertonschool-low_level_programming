#include <stdio.h>
#include <math.h>

/**
  *main - Finds the prime factors of a number
  *Return: always 0 (succes)
  */

int main()
{
	int a;
	int b;
	long int c;

	c = 612852475143;
	for (a = 2; a < sqrt(c); a++)
	{
		if(c % a == 0)
		{
			b = a;
			c = c / a;
			a = 1;
		}
	}
	b = c;
	printf("%d\n", b);
	return (0);
}
