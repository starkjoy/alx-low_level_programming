#include <stdio.h>

/**
 * Return: returns 0
 */

int _islower(int c)
{
	if (islower(c))
	{
		putchar('1');
	}
	else
	{
		putchar('0');
	}

	putchar('\n');
	return 0;
}
