#include <stdio.h>
#include <ctype.h>

/**
 * Return: returns 0
 */

int _islower(int c)
{
	int x;

	if (islower(c))
	{
		x = printf("1");

	}
	if (!(islower(c)))
	{
		x = printf("0");
	}

	return x;

}
