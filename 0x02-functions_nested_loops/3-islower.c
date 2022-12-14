#include <stdio.h>
#include <ctype.h>

/**
 * Return: returns 0
 */

int _islower(int c)
{
	if (islower(c) != 0)
	{
		printf("1");

	}
	if (!(islower(c)))
	{
		printf("0");
	}
	return 0;

}
