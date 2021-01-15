
#include "search_algos.h"
#include <math.h>
/**
 * jump_search -find a value in an sorted array using the Jump search algorithm.
 * @array: ponter to head
 * @size: array size
 * @value: is the value to search for
 *
 * Return: -1 or value
 */

int jump_search(int *array, size_t size, int value)
{
	int limit = (int) size, prev = 0, step = 0, min = 0;

	if (array == NULL)
		return (-1);
	if (value < array[min])
		return (-1);
	while (array[min] < value)
	{
		if (step < limit)
			printf("Value checked array[%i] = [%i]\n", min,
			       array[min]);
		else
			break;
		prev = step;
		step += sqrt(limit);
		min = step < limit ? step : limit - 1;
	}
	if (step == 0)
		step += sqrt(limit);
	printf("Value found between indexes [%i] and [%i]\n", prev, step);
	min = step < limit ? step : limit;
	while (array[prev] < value)
	{
		printf("Value checked array[%i] = [%i]\n", prev, array[prev]);
		prev++;
		if (prev == min)
			break;
	}
	if (prev <= limit - 1)
		printf("Value checked array[%i] = [%i]\n", prev, array[prev]);
	if (array[prev] == value)
	{
		return (prev);
	}
	return (-1);
}
