#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: int
 * @height: height of the grid
 *
 * Return: Int.
 */


int **alloc_grid(int width, int height)
{
	int i;
	int **grid;

	grid = malloc(width * sizeof(int *));
	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(height * sizeof(int));
	}
	return (grid);
}
