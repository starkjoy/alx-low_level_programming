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
	int x;
	int z = 11;

	i = i % 10;
	x = i * z;

	return (x);
}
