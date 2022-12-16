#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper(int c) - Checks for uppercase characters
 * Description: It returns 1 for uppercase or 0 for non uppercase
 * @n: accepts integer Characters
 * Return: 0
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
