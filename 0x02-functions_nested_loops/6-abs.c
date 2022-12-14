#include <stdio.h>

/**
 * _abs(int i) - printes absolutes of integers
 * Description: it prints absolutes
 * @i: accepts integers
 *
 * Return: returns 0
 */

int _abs(int i)
{
	int f;

	f = abs(i);
	printf("%i \n", f);

	return (f);
}
