#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by
 *             my alloc_grid function
 * @grid: takes in a two dimensional array
 * @height: takes in an integer, height of the array
 * Return: returns nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
