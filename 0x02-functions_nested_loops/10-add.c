#include <stdio.h>

/**
 * main - main prints the addition of two integers
 *
 * Return: returns 0
 */

int add(int x, int y)
{
	int z = x + y;

	return (z);
}


int main(void)
{
	int u = add (3, 4);
	printf("%i\n", u);

	return (0);
}
