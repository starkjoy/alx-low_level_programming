#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * *cap_string - Makes sentence capitalize
 * Description: Capitalizes sentences
 * @c: accepts string
 * Return: returns void
 */

char *cap_string(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (i == 0 || isspace(c[i - 1]) || (c[i - 1] != '-' && ispunct(c[i - 1])))
		{
			c[i] = toupper(c[i]);
		}
		i++;
	}
	return (c);
}
