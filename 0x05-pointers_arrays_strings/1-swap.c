#include "holberton.h"
/**
  *swap_int - swaps two integers
  *@a: int one
  *@b: int two
  *Return: void
  */

void swap_int(int *a, int *b)
{
	int exchange;

	exchange = *a;
	*a = *b;
	*b = exchange;
}

