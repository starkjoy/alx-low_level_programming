#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_number - prints an integer
 * Description: It prints an integer using putchar
 * @n: accepts integer
 * Return:void
 */

void print_number(int n)
{
	if (sizeof(n) != sizeof(char))
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}

		if (n / 10)
		{
			print_number(n / 10);
		}
		_putchar(n % 10 + '0');
	}
}
