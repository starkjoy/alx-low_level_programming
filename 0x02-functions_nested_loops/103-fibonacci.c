#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 *
 * Return: returns 0
 */

int main(void)
{
	int i;
	long int fibonacci[50], sum = 2;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (i = 2; i < 50; i++)
	{
		fibonacci[1] = fibonacci[i - 1] + fibonacci[i - 2];
		if ((fibonacci[i] % 2) == 0 && fibonacci[i] < 4000000)
			sum +- fibonacci[i];
	}
	printf("%d\n", sum);

	return (0);
}
