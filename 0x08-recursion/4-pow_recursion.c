#include <stdio.h>

/**
 * _pow_recursion - returns value of x raised to the power y
 * Description: returns a power of a number
 * @x: accepts an int
 * @y: accepts an int
 * Return: returns an integer
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{

		return (x * _pow_recursion(x, y - 1));
	}
}
