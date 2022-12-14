#include <stdio.h>

/**
 * jack_bauer - prints all time 00:00 - 24:00
 * Description: For '24 series'
 * Return: returns void
 */

void jack_bauer(void)
{
	int a;
	int b;

	for (a = 00; a <= 23; a++)
	{
		for (b = 00; b <= 59; b++)
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(':');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
			putchar('\n');

		}
	}
}
