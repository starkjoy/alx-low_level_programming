#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * *leet - encodes letters to numbers
 * Description: encodes sentences into leet
 * @c: accepts strings
 * Return: returns char pointer
 */

char *leet(char *c)
{
	int i;
	int j;

	int length = strlen(c);

	for (i = 0; i < length; i++)
	{
		char s = c[i];

		for (j = 0; j < 5; j++)
		{
			if (s == "aeotl"[j] || s == "AEOTL"[j])
			{
				c[i] = "43071"[j];
			}
		}
	}
	return (c);
}
