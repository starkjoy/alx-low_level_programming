#include "main.h"

/**
 * main - main prints the nine times table
 *
 * Return: returns 0
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
	return;
}


int main(void)
{
	times_table();

	return (0);
}
