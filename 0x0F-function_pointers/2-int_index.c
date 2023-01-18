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
		return;
	}

	if (size <= 0)
	{
		return (-1);
	}

	if (cmp(array[i]))
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
