#include <stdio.h>
#include <string.h>

/**
 * factorial - returns factorial of a number
 * Description: returns a factorial
 * @n: accepts a char array
 * Return: returns an integer
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
