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
	int l = 0;

	for (l -= 1; l >= 0; l--)
	{
		printf("%c",s[l]);
	}
}
