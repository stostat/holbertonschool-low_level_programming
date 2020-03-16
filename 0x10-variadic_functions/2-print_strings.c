#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @n: number of parameters
 * @separator: char
 * Return: sum.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list stri;
	unsigned int i;
	char *toprint = NULL;

	va_start(stri, n);
	for (i = 0; i < n; i++)
	{
		toprint = va_arg(stri, char *);
		if (toprint == NULL)
			printf("(nil)");
		else
		{
			printf("%s", toprint);
			if (i != (n - 1))
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(stri);
}
