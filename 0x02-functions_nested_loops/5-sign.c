#include <stdio.h>
#include <main.h>

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
	      	_putchar('+'); 
		return (1);
	}

	if (n == 0)
	{
		_putchar(',');
		return (0);
	}

	if ( n < 0)
	{
		_putchar('-');
		return (-1);
	}

	return (0);
}
