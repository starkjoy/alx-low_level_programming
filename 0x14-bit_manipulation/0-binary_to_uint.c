#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: accepts a character
 * Return: returns an unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int length;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	length = strlen(b);
	for (i = 0; i < length; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		result = (result << 1) + (b[i] - '0');
	}

	return (result);
}
