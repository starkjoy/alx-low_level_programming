#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - Checks for uppercase characters
 * Description: It returns 1 for uppercase or 0 for non uppercase
 * @c: accepts integer Characters
 * Return: 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
