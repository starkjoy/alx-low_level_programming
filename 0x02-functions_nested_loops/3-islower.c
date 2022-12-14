#include <stdio.h>
#include <ctype.h>

/**
 * DESCRIPTION: _islower tests for lower case characters
 * Return: returns 0 or 1
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);

	}
	else
	{
		return (0);
	}
}
