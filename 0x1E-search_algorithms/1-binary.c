#include "search_algos.h"

/*
 * binary_search - demonstrates a binary search algo
 * @array: data set to search in
 * @size: size of the array
 * @value: target value to find
 */

int binary_search(int *array, size_t size, int value)
{
	int i = 0;
	int low = 0;
	int high = size - 1;
	int mid;

	if (array == NULL) {
		printf("array is NULL\n");
		return (-1);
	}

	printf("Searching in array: ");
	for (i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");

	while (low <= high) {
		mid = (low + high) / 2;
		printf("Searching in subarray: ");
		for (i = low; i <= high; i++) {
			printf("%d ", array[i]);
		}
		printf("\n");

		if (array[mid] == value) {
			return (mid);
		} else if (array[mid] < value) {
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}
	printf("Value not found\n");
	return (-1);
}
