#include <stdio.h>

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
	putchar ('0' + i);
	return (0);
}
