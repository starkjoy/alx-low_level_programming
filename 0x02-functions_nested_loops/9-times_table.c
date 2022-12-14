#include <stdio.h>

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
			int zero = a * b;
			if (zero < 10)
			{
				putchar(result + '0');
				putchar('0');
			}
			else
			{
				putchar((a * b) / 10 + '0');
				putchar((a * b) % 10 + '0');
				putchar(',');
			}
			putchar(' ');
			if (result < 10)
			{
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
