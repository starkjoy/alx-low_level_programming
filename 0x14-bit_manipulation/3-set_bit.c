#include <stdio.h>

/**
 * set_bit - gives the value of a bit at a given index
 * @n: accepts unsigned long int
 * @index: accepts unsigned long int
 * Return: returns an int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > (sizeof(*n) * 8 - 1))
	{
		return (-1);
	}
	*n = *n | (1 << index);
	return (1);
}
