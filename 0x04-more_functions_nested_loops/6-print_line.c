#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line
 * Description: draws a line
 * @n: accepts integer Characters
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		int j;

		for (j = 0; j < n; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
