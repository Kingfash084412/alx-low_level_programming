#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2D array of integers.
 * created by your malloc_grid function
 * @grid: An input 2D array of integers to free
 * @height: height of grid
 * Return: NULL
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}

