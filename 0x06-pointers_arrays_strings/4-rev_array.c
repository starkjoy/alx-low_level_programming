#include <stdio.h>
#include <string.h>

/**
 * reverse_array - reverses array
 * Description: backwards print an array
 * @a: accepts array as pointer
 * @n: accepts integer values
 * Return: returns void
 */

void reverse_array(int *a, int n)
{
	int rec;
	int i;

	for (i = n - 1; i >= n / 2; i--)
	{
		rec = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = rec;
	}
}
