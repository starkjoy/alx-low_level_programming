#include <stdio.h>

/**
 * main - main printsn combinations of two numbers
 *
 * Return: return 0
 */

int main(void)
{

	for (int b = '0';  b <= '9'; b++)
	{
		for (int c = '0'; c < '9'; c++)
		{

			if (b !=c && b < c)
			{
				putchar(b + 0);
				putchar(',');
				putchar(' ');
				putchar(j + '0');
				putchar('\n')
			}
		}
	}


	return (0);
}
