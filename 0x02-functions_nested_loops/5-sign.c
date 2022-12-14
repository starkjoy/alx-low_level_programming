#include <stdio.h>

/**
 * print_sign - prints an integer sign
 * Description: It checks what sign an integer is
 * @n: accepts integers of all signs
 * Return: returns 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		int x = 1;
		int y = printf("+%i", x);
		return (0);
	}

	if (n == 0)
	{
		putchar('0');
		return (0);
	}

	if ( n < 0)
	{
		putchar('-');
		return (-1);
	}

	return (0);
}
