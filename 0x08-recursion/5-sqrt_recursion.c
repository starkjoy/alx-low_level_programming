#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - returns a natural square root of a number
 * Description: returns a natural square root
 * @n: accepts an int
 * Return: returns an integer
 */

int _sqrt_recursion(int n)
{

	if (!(sqrt(n)))
	{
		return (-1);
	}
	else
	{

		return ( _sqrt_recursion(sqrt(n));
	}
}
