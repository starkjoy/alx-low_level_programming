#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2D array of integers
 * @grid accepts pointer to pointer int
 * @height: accepts an int
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free (grid);
}
