#include "holberton.h"

/**
  *_strlen - gives the lenght of a string
  *@s: char
  *Return: integer 0 (succes)
  */

int _strlen(char *s)
{
	int l;

	l = 0;
	while (s[l])
	{
		l++;
	}
		return (l);
}
