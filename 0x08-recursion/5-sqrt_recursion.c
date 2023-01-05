#include <stdio.h>

/**
 * _sqrt_recursion - returns a natural square root of a number
 * Description: returns a natural square root
 * @n: accepts an int
 * Return: returns an integer
 */

int _sqrt_recursion(int n)
{
	int guess;

	if (n == 0 || n == 1)
	{
		return n;
	}

	guess = _sqrt_recursion(n - 1);

	if (guess * guess == n)
	{
		return guess;
	}
	else
	{
		return guess + 1;
	}
}
