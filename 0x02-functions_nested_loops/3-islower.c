#include <stdio.h>
#include <ctype.h>

/**
 * Return: returns 0
 */

int _islower(int c)
{
	if (islower(c))
	{
		printf("1\n");

	}
	else
	{
		printf("0\n");
	}
	return 0;
}
