#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - brings numbers from string
 * @s: Char
 * Return: Int
 */

int _atoi(char *s)
{
	char *number = s;
	int index = 0;
	int sign = 0;
	unsigned int result = 0;

	while (*number != '\0')
	{
		if (*number >= '0' && *number <= '9')
		{
			result = (result * 10) + (*number - '0');
			index++;
		}
		else if (*number == '-')
			sign++;
		else if (index > 0)
			break;
		if (sign % 2 != 0)
			result = result * -1;
		return (result);
}
