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
	
	*a = mirror1;
	*b = mirror2;
	mirror2 = *a;
	mirror1 = *b;
}
