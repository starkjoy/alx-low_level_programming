#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Checks for uppercase characters
 * Description: prints numbers 0 - 9
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j = 1;

	while (j <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar('1');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
		j++;
	}
}
