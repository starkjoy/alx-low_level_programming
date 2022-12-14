#include <stdio.h>
#include <stdlib.h>
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
	for (int x = '0'; x <= '9'; x++)
	{
		if (i == x)
		{
			_putchar((i % 10) + '0');
		}
	}

	i = abs(i) % 10;
	_putchar(i + '0');
	return (i);
}
