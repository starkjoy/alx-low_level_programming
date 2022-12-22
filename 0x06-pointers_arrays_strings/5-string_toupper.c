#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - make small char big
 * Description: replaces small chars with big chars
 * @c: accepts string
 * Return: returns char pointer
 */

char *string_toupper(char *c)
{
	char *result = c;

	while (c)
	{
		if (*s >= 'a' && *s <= 'z')
			*c -= 32;
		c++;
	}
	return (result);
}
