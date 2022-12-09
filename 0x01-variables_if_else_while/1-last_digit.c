#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints the last number
 *
 * Return: returns 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is %i is greater than 5", n, n);
	}
	if (n == 0)
	{
		printf("Last digit of %d is %i and is 0", n, n);
	}
	if (n < 6)
	{
		printf("Last digit of %d is %i is less than 6 and not 0", n, n);
	}
	return (0);
}
