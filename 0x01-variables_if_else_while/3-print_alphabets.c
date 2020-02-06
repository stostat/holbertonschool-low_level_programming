#include <stdio.h>
/**
*main - Entry point
*
*Return: always 0 (Succes)
*/

int main(void)
{
char ch;
char m;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar (ch);
}
for (m = 'A' ; m <= 'Z' ; m++)
{
putchar (m);
}
putchar ('\n');
return (0);
}
