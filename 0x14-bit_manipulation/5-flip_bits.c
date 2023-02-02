#include <stdio.h>

/**
 * flip_bit - returns number of bits to flip
 * @n: accepts unsigned long int
 * @m: accepts unsigned long int
 * Return: returns an unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned int m)
{
	unsigned int count = 0;
	unsigned long int x = n ^ m;

	while (x)
	{
		count = count + (x & 1);
		x = x >> 1;
	}
	return (count);
}
