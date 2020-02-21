#include "holberton.h"
#include <stdio.h>

/**
 * leet - check the code for Holberton School students.
 * @s: char
 * Return: char
 */

char *leet(char *s)
{
	int count1;
	int count2;
	int temp;
	char letters[] = "oOlLeEaAtT";
	char numbers[] = "0011334477";

	for (count1 = 0; s[count1] != '\0'; count1++)
	{
		count2 = 0;
		temp = 0;
		while (letters[count2] != '\0')
		{
			if (s[count1] == letters[count2])
			{
				temp = count2;
				s[count1] = numbers[temp];
			}
			count2++;
		}
	}
	return (s);
}
