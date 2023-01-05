#include <stdio.h>

/**
 * _sqrt_recursion - returns a natural square root of a number
 * Description: returns a natural square root
 * @n: accepts an int
 * Return: returns an integer
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if ( n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int i = 1;
		int result = 1;

		while (result <= n)
		{
			i++;
			result = i * i;
		}
		return (_sqrt_recursion(n - result + i));
	}
}
