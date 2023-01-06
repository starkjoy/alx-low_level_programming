#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns a natural square root of a number
 * Description: returns a natural square root
 * @n: accepts an int
 * Return: returns an integer
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculates natural square root
 * @n: number to calculate the square root
 * @i: iterating integer
 *
 * Return: the natural square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}	
