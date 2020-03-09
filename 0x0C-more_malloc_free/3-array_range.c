#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function
 * @min: int
 * @max: int
 * Return: int
 */

int *array_range(int min, int max)
{
	int *ptr;
	int res, i;

	if (min > max)
		return (NULL);
	res = max - min;
	ptr = malloc((res + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= res; min++, i++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
