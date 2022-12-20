#include <stdio.h>

/**
 * swap_int - swaps integer
 * Description: swaps two integers
 * @a: accepts pointer to first integer
 * @b: accepts pointer to second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int mirror1;
	int mirror2;

	mirror1 = *a;
	mirror2 = *b;
	*a = mirror2;
	*b = mirror1;
}
