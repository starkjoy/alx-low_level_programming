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
	for (n -= 1; n >= 0; n--)
	{
		printf("%i", a[n]);
	}
}
