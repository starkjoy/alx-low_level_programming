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
	int a;
	int b;

	int l = strlen(s) - 1;
	int i = 0;

	while (i < l)
	{
		a = s[i];
		b = s[l];

		s[i++] = a;
		s[l--] = b;
	}
}
