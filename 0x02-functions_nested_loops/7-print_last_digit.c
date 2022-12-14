#include <stdio.h>

/**
 * print_last_digit - prints exactly that
 * Description: prints the last number of a digit
 * @i: accepts integers
 * Return: returns 0
 */

int print_last_digit(int i)
{
	i = i % 10;
	putchar(i + '0');

	return (i);
}
