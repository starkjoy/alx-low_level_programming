#include <stdio.h>

/**
 * get_endianness - gives the value of a bit at a given index
 * Return: returns an int
 */

int get_endianness(void)
{
	int num = 1;

	char *ptr = (char *)&num;

	if (*ptr)
	{
		return (1);
	}

	return (0);
}
