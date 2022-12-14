#include <stdio.h>

/**
 * main - main prints natural numbers ending at 98
 *
 * Return: returns 0
 */

void print_to_98(int n)
{
	for (n = n; n <= 98; n++)
	{
		printf("%i", n);
		if (n == 98)
			continue;
		putchar(',');
	}
	return;
}


int main(void)
{
	print_to_98(25);

	return (0);
}
