#include "holberton.h"
/**
*main -Entry
*
*Return: always 0 (succes)
*/
int main(void) {
char hol[]="Holberton\n";
int i=0;
while (i<9)
{
_putchar(hol[i]);
i=i+1;
}
_putchar('\n');
return (0);
}
