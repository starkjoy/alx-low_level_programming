#include <stdlib.h>
#include <time.h>

/**
 * main - main will assign a random number to variable
 *
 * Result: returns 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() -RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i\n", n)
	}
	if (n == 0)
	{
		printf("%i\n", n)
	}
	if (n < 0)
	{
		printf("%i\n", n)
	}
	return (0);

}
