#include "main.h"

/**
 * main - main checks for lowercase letters
 *
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

int main(void)
{
	int r;

	r = _islower('H');
	r = _islower('h');

	return (0);
}
