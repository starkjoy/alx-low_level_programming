#include <stdio.h>

/**
 * print_to_98 - prints natural numbers ending at 98
 * Description: adds up numbers till it ends at 98
 * @n: accepts integers
 * Return: void
 */

void print_to_98(int n)
{
	for (n = n; n <= 98; n++)
	{
		printf("%i", n);
		if (n == 98)
			continue;
		putchar(',');
	}
}
