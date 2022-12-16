#include <stdio.h>
#include "main.h"

/**
 * print_triangle - draws a triangle with #
 * Description: draws a triangle
 * @size: accepts integer numbers
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i - 1; j++)
			{
				_putchar('-');
			}
			for (k = 0; k < 1 + 1; k++)
			{
				_putchar('#');
			}
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
