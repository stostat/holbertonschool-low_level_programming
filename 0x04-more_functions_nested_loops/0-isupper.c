#include "holberton.h"

/**
  * _isupper - checks for a character if uppercase
  * @c: Integer
  * Return: Integer
  */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}
