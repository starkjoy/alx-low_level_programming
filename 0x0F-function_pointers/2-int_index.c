#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: accepts integer array
 * @size: accepts integer
 * @cmp: accepts fuction
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}

	return (1);
}
