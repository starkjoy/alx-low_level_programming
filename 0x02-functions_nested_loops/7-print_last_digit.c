#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * print_last_digit - prints exactly that
 * Description: it prints last digits
 * @i: accepts integers
 *
 * Return: returns 0
 */

int print_last_digit(int i)
{
	if (isfloat(i))
	{
		i = abs(i) % 10;
		_putchar(i + '0');
	}
	else
	{
		_putchar((i / 10) % 10 + '0');
	}

	return (i);
}
