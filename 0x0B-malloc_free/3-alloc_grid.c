#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - creates a 2D array of integers
 * @width: accepts int
 * @height: accepts an int
 * Return: pointer to pointer int
 */

int **alloc_grid(int width, int height)
{
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	int **grid = malloc(sizeof(int*) * (height));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * (width));
		if (grid[i] == NULL)
		{
			int j;
			
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);

			return (NULL);
		}
	}
	
	for (i = 0; i < height; i++)
	{
		int j;
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);

}
