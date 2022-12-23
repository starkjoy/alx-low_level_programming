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
	int idx = 0;

	while (c[idx])
	{
		if (idx == 0 || isspace(c[idx - 1]) || ispunct(c[idx - 1]))
		{
			c[idx] = toupper(c[idx]);
		}
		idx++;
	}
	return (c);
}
