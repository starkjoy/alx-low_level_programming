#include <stdio.h>
#include <ctype.h>

/**
 * _islower - checks for lowercase
 * Description: _islower tests for lower case characters
 * Return: returns 0 or 1
 * @c: accepts charaters
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
