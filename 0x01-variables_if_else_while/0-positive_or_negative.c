#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main will assign a random number to variable
 *
 * Return: returns 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf(n," %li is positive\n");
	}
	if (n == 0)
	{
		printf(" %i is zero\n", n);
	}
	if (n < 0)
	{
		printf(" %i is negative\n", n);
	}
	return (0);

}
