#include <stdio.h>
#include <ctype.h>

/**
 * Return: returns 0
 */

int _islower(int c)
{
	if (islower(c))
	{
		printf("1");

	}
	else
	{
		printf("0");
	}
	return 0;

}
