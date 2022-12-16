#include <stdio.h>
#include "main.h"

/**
 * print_square - draws a square
 * Description: draws a square
 * @size: accepts integer
 * Return: void
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < (size - 1); j++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
