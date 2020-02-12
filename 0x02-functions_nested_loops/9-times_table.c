#include <stdlib.h>
#include "holberton.h"

/**
 * times_table - prints the table 9 times
 * Return: nothing
 */

void times_table(void)
{
int a; 
int b;
int c;
a=0;
while (a<10)
{
for (b=0;b<10;b++)
{
c=a*b;
if (c>=10)
{
_putchar(' ');        
_putchar(48+c/10);
_putchar(48+c%10);
if (b<9)
{
_putchar(',');
}
}
else if (c<=9)
{
if (b!=0)
{
_putchar(' ');
_putchar(' ');
_putchar(48+c);
}else
_putchar(48+c);
if (b<9)
{  
_putchar(',');
} 
}
}
a++;
_putchar('\n');
}
}
