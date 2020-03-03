#include "holberton.h"

/**
 * free_grid - frees a 2 dimensional grid previously created by your alloc_grid
 * @grid: the 2 dimensional array to be freed
 * @height: the number of rows of grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

