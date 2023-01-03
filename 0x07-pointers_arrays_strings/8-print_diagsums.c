#include <stdio.h>

/**
 * print_diagsums - prints the sum of two square matrice diagonals
 * Description: prints the sum of two matrice diagonals
 * @a: accepts an integer array
 * @size: accepts integer
 * Return: returns void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int ans = 0;
	int ans1 = 0;

	for (i = 0; i < size; i++)
	{
		int j;

		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				ans = ans + *(a + i * size + j);
			}
			if (i + j == (size - 1))
			{
				ans1 = ans1 + *(a + i * size + j);
			}
		}
	}
	printf("%d ", ans);
	printf("%d\n", ans1);
}
