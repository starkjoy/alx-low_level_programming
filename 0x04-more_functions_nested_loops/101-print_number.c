#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer
 * Description: It returns 1 for uppercase or 0 for non uppercase
 * @n: accepts integer
 * Return: 0
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		_putchar('\n');
	}

	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
	_putchar('\n');
}
