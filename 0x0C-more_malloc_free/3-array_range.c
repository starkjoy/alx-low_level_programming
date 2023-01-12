#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: accepts integer
 * @max: accepts int
 * Return: void
 */

int *array_range(int min, int max)
{
	int width;
	int ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	width = max - min + 1;

	ptr = malloc(width);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0, i < width; i++)
		{
			ptr[i] = min + i;
		}
		
		return (ptr);
	}
}
