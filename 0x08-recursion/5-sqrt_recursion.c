#include <stdio.h>

/**
 * _sqrt_recursion - returns a natural square root of a number
 * Description: returns a natural square root
 * @n: accepts an int
 * Return: returns an integer
 */

int _sqrt_recursion(int n)
{
	int prev;
	int result;

	if (n < 0)
	{

		return (-1);
	}
	prev = 1;
	if (prev * prev == n)
	{
		return (prev);
	}
	result = _sqrt_recursion(n + prev + 1);
	if (result == -1)
	{
		return (-1);
	}
	return (result);
}
