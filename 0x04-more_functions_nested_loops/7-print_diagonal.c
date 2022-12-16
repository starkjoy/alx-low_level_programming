#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a straight line
 * Description: draws a line
 * @n: accepts integer Characters
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
