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

	for (b = '0';  b <= '9'; b++)
	{
		for (c = b + 1; c < '9'; c++)
		{

			if (c != d)
			{
				putchar(b);
				putchar(c);

				if (b == '8' && c == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');


	return (0);
}
