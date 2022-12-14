#include "main.h"

/**
 * main - main prints the absolute of an integer
 *
 * Return: returns 0
 */

void jack_bauer(void)
{
	int a;
	int b;

	for (a = 00; a <= 23; a++)
	{
		for (b = 00; b <= 59; b++)
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(':');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
			putchar('\n');

		}
	}

	return (0);
}


int main(void)
{
	jack_bauer();

	return (0);
}
