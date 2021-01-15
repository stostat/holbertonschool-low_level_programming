#include "search_algos.h"

/**
 * print_array - prints an array
 * @array: pointer to head
 * @size: size of array
 *
 */

void print_array(int *array, int size)
{
	int index = 0;

	if (array == NULL)
		return;
	printf("Searching in array: ");
	for (index = 0; index < size; index++)
	{
		printf("%i", array[index]);
		if (index != (size - 1))
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - uses binary search algo to find element
 * @array: pointer to head
 * @size: array size
 * @value: what will be searched
 *
 * Return: -1 if value no found or if array is NULL, otherwise
 * the first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int limit = (int) size, mid = 0, left = 0, right = 0;

	if (array == NULL)
		return (-1);
	right = limit - 1;
	while (left <= right)
	{
		print_array(array + left, right + 1 - left);
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
