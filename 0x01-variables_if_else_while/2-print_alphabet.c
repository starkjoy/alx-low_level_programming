#include <stdio.h>

/**
 * main - main prints the alphabet in lowercase
 *
 * Return: returns 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
		putchar('\n');

	return (0);
}
