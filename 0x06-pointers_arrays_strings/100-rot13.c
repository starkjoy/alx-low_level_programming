#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * rot13 - encode a string in rot-13
 * Description: Capitalizes sentences
 * @c: accepts string
 * Return: returns a pointer
 */

char *rot13(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (islower(c[i]))
		{
			c[i] = (c[i] - 'a' + 13) % 26 + 'a';
		}
		else if (isupper(c[i]))
		{
			c[i] = (c[i] - 'A' + 13) % 26 + 'A';
		}
	}
	return (c);
}
