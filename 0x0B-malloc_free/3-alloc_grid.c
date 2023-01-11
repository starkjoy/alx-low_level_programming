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
	char *ptr;
	int i, k;
	int **grid;


	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{

		for (k = 0; k < height; k++)
		{
			printf("%i", grid[i][k]);
		}
	}

	ptr = malloc(sizeof(int*) * grid + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
}
