#include "search_algos.h"

/*
 * linear_search - demonstrates a linear searh algo
 * @array: data set to search in
 * @size: size of the array
 * @value: target value to find
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Comparing %d\n", array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
