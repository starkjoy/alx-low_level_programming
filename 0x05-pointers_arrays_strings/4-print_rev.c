#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a reverse string
 * Description: prints string
 * @s: accepts a string
 * Return: returns void
 */

void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	for (l -= 1; l >= 0; l--)
	{
		putchar(s[l]);
	}
	putchar('\n');
}
