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
	char *len = s;

	while (*len)
	{
		len++;
	}
	len = len - 1;

	while (len)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
