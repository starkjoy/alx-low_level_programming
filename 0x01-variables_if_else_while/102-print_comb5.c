#include <stdio.h>

/**
 * main - main prints combinations of two numbers
 *
 * Return: return 0
 */

int main(void)
{
	int b;
	int c;

	for (b = 0;  b <= 98; b++)
	{
		for (c = 1; c <= 99; c++)
		{
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			putchar(' ');
	
			putchar((c / 10) + '0');
			putchar((c % 10) + '0');

			if (b == 98 && c == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
