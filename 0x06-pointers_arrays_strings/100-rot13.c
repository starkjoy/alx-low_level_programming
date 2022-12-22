#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * *rot13 - Makes sentence capitalize
 * Description: Capitalizes sentences
 * @c: accepts string
 * Return: returns a pointer
 */

char *rot13(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (isalpha(c[i]))
		{
			c[i] = (c[i] - 'a' + 13) % 26 + 'a';
		}
	}
	return (c);
}
