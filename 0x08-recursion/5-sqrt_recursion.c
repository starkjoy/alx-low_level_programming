#include <stdio.h>

/**
 * _sqrt_recursion - returns a natural square root of a number
 * Description: returns a natural square root
 * @n: accepts an int
 * Return: returns an integer
 */

int _sqrt_recursion(int n)
{
	int prev = 1;

	if (prev * prev == n)
	{
		return prev;
	}
	else if (prev > n / prev)
	{
		return -1;
	}
	return _sqrt(n, prev + 1);
}
