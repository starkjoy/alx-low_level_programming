#include <stdio.h>
#include <ctype.h>

/**
 * Return: returns 0
 */

int _islower(int c)
{
	if (islower(c))
	{
		putchar(c + '0');
	}
	else
	{
		putchar( c + '0');
	}

	_putchar('\n');
	return 0;
}
