#include <stdio.h>
#include "main.h"

/**
 * times_table - prints 9 times table
 * Description: 9 times table
 * Return: returns void
 */

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			_putchar('\');

			int zero = a * b;

			if (zero < 10)
			{
				_putchar(zero + '0');
				if (b == 9)
					continue;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');

			}
			else
			{
				_putchar((a * b) / 10 + '0');
				_putchar((a * b) % 10 + '0');
				if (b == 9)
					continue;
				_putchar(',');
			}
			if (zero >= 10)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
		_putchar('$');
	}
}
