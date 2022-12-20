#include <stdio.h>
#include <string.h>

/**
 * rev_string - prints a reverse string
 * Description: prints string
 * @s: accepts a string
 * Return: returns void
 */

void rev_string(char *s)
{
	int l = strlen(s);

	for (l -= 1; l >= 0; l--)
	{
		char crt;
		crt = putchar(s[l]);
		*s = crt;
	}
}
