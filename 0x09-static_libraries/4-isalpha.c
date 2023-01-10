#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - Checks for uppercase letters
 * Description: it checks if value is an alphabet
 * Return: returns 0 or 1
 * @c: accepts characters
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
