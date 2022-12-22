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
	int char_count = 0;
	char character;
	char *result;

	while (c[char_count])
	{
		character = c[char_count];
		result = toupper(character);
		char_count++;
	}
	return (*result);
}
