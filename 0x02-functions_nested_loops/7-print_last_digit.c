#include <stdio.h>
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

	i = i % 10;
	_putchar(i + '0');

	return(0);
}
