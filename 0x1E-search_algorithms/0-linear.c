#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of
 * @array: pointer
 * @size:  elements in array
 * @value: value to search for
 *
 * Return: -1 if value is not present in array or if array is NULL, otherwise
 * the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	int limit = 0, index = 0, position = -1;

	if (array == NULL)
		return (-1);
	limit = (int) size;
	for (index = 0; index < limit; index++)
	{
		printf("Value checked array[%i] = [%i]\n", index, array[index]);
		if (array[index] == value)
		{
			position = index;
			break;
		}
	}
	return (position);
}
