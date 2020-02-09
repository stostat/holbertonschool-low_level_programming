#include <stdio.h>
/**
 *main - Entry
 *
 *Return: always 0 (succes)
 */
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (a != 'e' && a != 'q')
putchar(a);
}
putchar('\n');
return (0);
}
