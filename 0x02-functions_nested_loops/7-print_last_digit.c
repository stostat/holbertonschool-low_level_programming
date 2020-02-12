#include "holberton.h"
/**
 *print_last_digit - Prints the last digit of any given number
 *@n: integer
 *Return: integer  (succes)
 */

int print_last_digit(int n)
{
int l;
if (n < 0)
n = n * -1;
l = n % 10;
_putchar(l + 48);
return (l);
}
