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

	while (x3 < 4000000)
	{
		x3 = x1 + x2;
		num_sum = num_sum + x3 * !(x3 % 2);
		x1 = x2;
		x2 = x3;
	}

	printf("%u\n", num_sum);

	return (0);
}
