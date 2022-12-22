#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * *cap_string - Makes sentence capitalize
 * Description: Capitalizes sentences
 * @c: accepts string
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
