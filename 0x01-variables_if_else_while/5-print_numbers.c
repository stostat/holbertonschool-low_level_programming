#include <stdio.h>
/**
 *main - Entry
 *
 *Return: always 0 (succes)
 */
int main(void)
{
char n;
n = '0';
while (n <= '9')
{
putchar(n);
n++;
}
putchar('\n');

return (0);
}
