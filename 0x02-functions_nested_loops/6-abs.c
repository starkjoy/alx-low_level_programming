#include <stdio.h>
#include <stdlib.h>

/**
 * _abs(int i) - printes absolutes of integers
 * Description: it prints absolutes
 * @i: accepts integers
 *
 * Return: returns 0
 */

int _abs(int i)
{
	int x;

	x = abs(i);
	printf("%i \n", x);

	return (x);
}
