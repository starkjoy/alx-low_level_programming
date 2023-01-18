#include <stdio.h>

/**
 * array_iterator
 * @array: accepts integer array
 * @size: accepts struct size_t
 * @action: accepts fuction
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
