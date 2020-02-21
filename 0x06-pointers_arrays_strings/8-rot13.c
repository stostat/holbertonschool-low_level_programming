#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - check the code for Holberton School students.
 * @s: char
 * Return: char
 */

char *rot13(char *s)
{
	int count1; 
	int count2;
	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (count1 = 0; s[count1] != '\0'; count1++)
	{
		for (count2 = 0; rot1[count2] != '\0'; count2++)
		{
			if (s[count1] == rot1[count2])
			{
				s[count1] = rot2[count2];
				break;
			}
		}
	}

	return (s);
}
