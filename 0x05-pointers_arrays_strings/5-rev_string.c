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
	char *crt;

	int l = strlen(s);

	for (l -= 1; l >= 0; l--)
	{
		crt = putchar(s[l]);
	}
	puts(crt);
}
