#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "holberton.h"

/**
 *print_to_98 - prints numbers until 98
 *@n: integer
 *return: integer
 */
void print_to_98(int s)
{
if (s<98)
{
for (;s<98;)
{
printf("%i, ", s);
s=s+1;
}
}
else if (s>98)
{
for(;s>98;)
{
printf("%i, ", s);
s=s-1;
}
}
if (s==98)
printf("%i\n", s);
}
