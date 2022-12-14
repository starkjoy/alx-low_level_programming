#include "main.h"

/**
 * main - main prints the last digit of integer
 *
 * Return: returns 0
 */

int print_last_digit(int i)
{
	i = i % 10;
	putchar(i + '0');

	return (i);
}


int main(void)
{
	print_last_digit(50);

	return (0);
}
