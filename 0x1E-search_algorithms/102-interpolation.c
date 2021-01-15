
#include "search_algos.h"
#include <math.h>

/**
 * get_mid_position - gets middle position
 * @high: highest index
 * @low: lowest index
 * @a_high: array high position
 * @a_low: array lower position
 * @value: is the value to search
 *
 * Return: the middle position
 */
int get_mid_position(int high, int low, int a_high, int a_low, int value)
{
	int mid = 0;

	mid = low + (((double) (high - low) / (a_high - a_low)) *
		     (value - a_low));
	return (mid);
}
/**
 * print_check_msg - prints message
 * @pos: is the position in the array
 * @value: is the value in the array
 *
 */
void print_check_msg(int pos, int value)
{
	printf("Value checked array[%i] = [%i]\n", pos, value);
}

/**
 * interpolation_search - searches for a value in an sorted array
 * @array: pointer to head
 * @size: array size
 * @value: value to find
 *
 * Return: -1 or value
 * the first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	int limit = (int) size, low = 0, high = limit - 1, mid = 0;

	if (array == NULL)
		return (-1);
	while ((array[high] != array[low]) && (value >= array[low]) &&
	       (value <= array[high]))
	{
		mid = get_mid_position(high, low, array[high], array[low],
				       value);
		if (mid > limit)
			break;
		print_check_msg(mid, array[mid]);
		if (array[mid] < value)
		{

			low = mid + 1;
		}
		else if (value < array[mid])
		{
			high = mid - 1;
		}
		else
			return (mid);
	}
	if (value == array[low])
	{
		print_check_msg(mid, array[mid]);
		return (low);
	}
	mid = get_mid_position(high, low, array[high], array[low], value);
	printf("Value checked array[%i] is out of range\n", mid);
	return (-1);
}
