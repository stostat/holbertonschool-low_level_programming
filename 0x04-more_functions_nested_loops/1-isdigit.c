#include "holberton.h"

/**
  * _isdigit - checks for digits 0 to 9
  * @c: Integer
  * Return: Integer
  */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
	return (1);
else
	return (0);
}
