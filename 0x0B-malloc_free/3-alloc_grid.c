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
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int**)malloc(height * sizeof(int));
	if (grid == NULL)
	{
		return (NULL);
	}


	grid = (int*)malloc(width * sizeof(int));
        if (grid == NULL)
        {
                return (NULL);
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
