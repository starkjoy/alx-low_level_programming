#include <stdio.h>
#include <stdlib.h>
#include "main"

/**
 * print_last_digit - prints exactly that
 * Description: it prints last digits
 * @i: accepts integers
 *
 * Return: returns 0
 */

int print_last_digit(int i)
{	
	i = abs(i);
	_putchar((i % 10) + '0');
	return (i);
}
