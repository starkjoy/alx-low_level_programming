#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms of the fibonacci sequence
 *
 * Return: returns 0
 */

int main(void)
{
	unsigned int x1 = 1;
	unsigned int x2 = 1;
	unsigned int x3 = 2;
	unsigned int num_sum = 0;
	int counter = 0;

	while (x3 < 50)
	{
		printf("%u, ", x3);
		x3 = x1 + x2;
		x1 = x2;
		x2 = x3;
		counter++;
	}

	printf("\n");

	return (0);
}
