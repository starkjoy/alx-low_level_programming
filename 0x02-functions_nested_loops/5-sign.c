#include "main.h"

/**
 * main - main prints the sign of a number
 *
 * Return: returns 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		putchar(',');
		putchar(' ');
		putchar('1');
	}

	if (n == 0)
	{
		putchar('0');
		putchar(',');
		putchar(' ');
		putchar('1');
	}

	if ( n < 0)
	{
		putchar('-');
		putchar(',');
		putchar(' ');
		putchar('1');
	}

}

int main(void)
{
	print_sign(0);
	print_sign(5);
	print_sign(-2);

	return (0);
}
