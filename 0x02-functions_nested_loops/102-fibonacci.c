#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms of the fibonacci sequence
 *
 * Return: returns 0
 */

int main(void)
{
	long int x1 = 1;
	long int x2 = 1;
	long int x3 = 1;
	int counter = 0;

	while (counter < 50)
	{
		printf("%ld", x3);
		if (!(counter == 49))
		{
			putchar(',');
			putchar(' ');
		}
		x3 = x1 + x2;
		x1 = x2;
		x2 = x3;
		counter++;
	}

	printf("\n");

	return (0);
}
