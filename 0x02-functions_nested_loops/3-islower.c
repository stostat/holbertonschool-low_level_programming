#include "holberton.h"

/**
 * islower - checks lowercases
 * @c
 * Return: 0 if lowercase 1 if otherwise
 */

int _islower(int c)
{
if (c>='a'&&c<='z')
return(1);
else
return (0);
}
