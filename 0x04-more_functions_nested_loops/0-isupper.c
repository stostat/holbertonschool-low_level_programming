#include "holberton.h"

/**
  * _isupper - checks for a character if uppercase
  * @c: Integer
  * Return: Integer
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
