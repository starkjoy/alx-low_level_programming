#include <stdio.h>

/**
 * clear_bit - gives the value of a bit at a given index
 * @n: accepts unsigned long int
 * @index: accepts unsigned long int
 * Return: returns an int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}
