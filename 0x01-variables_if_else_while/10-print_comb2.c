#include <stdio.h>
/**
*main - Entry
*
*Return: always 0(succes)
*/
int main(void)
{
int num1;
int num2;

num1 = 48;
num2 = 48;
while (num1 < 58)
{
while (num2 < 58)
{
putchar(num1);
putchar(num2);
if (num1 != 57 ||  num2 != 57)
{
putchar(44);
putchar(32);
}
num2++;
}
num2 = 48;
num1++;
}
putchar('\n');
return (0);
}
