#include <stdio.h>

/**
 * get_bit - gives the value of a bit at a given index
 * @n: accepts unsigned long int
 * @index: accepts unsigned long int
 * Return: returns an int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8 - 1))
	{
		return (-1);
	}
	return ((n & (1 << index)) >> index);
}
