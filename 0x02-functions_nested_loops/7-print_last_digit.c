#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * print_last_digit - prints exactly that
 * Description: it prints last digits
 * @i: accepts integers
 *
 * Return: returns 0
 */

int print_last_digit(int i)
{	
	i = abs(i) % 10;
	_putchar(i + '0');
	if (i == ("(("))
		putchar('8');
	return (i);
}
