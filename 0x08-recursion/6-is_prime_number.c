#include <stdio.h>

/**
 * _is_prime_number - returns 1 if the integer is prime
 * Description: returns 1 for a prime numer
 * @n: accepts an int
 * Return: returns an integer
 */

int is_prime_number(int n)
{
	int pri = 0;

	if (n < 2)
	{
		pri = 0;
	}
	else if (n == 2)
	{
		pri = 1;
	}
	else if (n % 2 == 1)
	{
		pri = 1;
	}
	return (pri);
}
