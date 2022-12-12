#include <stdio.h>

/**
 * main - main printsn combinations of two numbers
 *
 * Return: return 0
 */

int main(void)
{
	int b;
	int c;
	int d;

	for (b = '0';  b < '9'; b++)
	{
		for (c = '1'; c <= '9'; c++)
		{
			for (d = '1'; d <= '9'; d++)
			{
				if ((d > c) && c < b)
				{
					putchar(b);
					putchar(c);
					putchar(d);

					if (b == '7' && c == '8')
					continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');


	return (0);
}
