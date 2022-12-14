#include <stdio.h>

/**
 * print_to_98 - prints natural numbers ending at 98
 * Description: adds up numbers till it ends at 98
 * @n: accepts integers
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%i", n);

			if (n == 98)
			{
				printf("\n");
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%i", n);
			if (n == 98)
			{
				putchar('\n');
				continue;
			}
			putchar(',');
		}
	}
}
