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
	int z;

	i = i % 10;
	z = printf("%i", i * 11);

	return (0);
}
