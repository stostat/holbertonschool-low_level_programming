#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that prints a name
 * @array: pointer to an int
 * @size: pointer
 * @action: pointer to functions
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
