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
	int length;
	int start;
	int end;
	char temp;

	length = strlen(s);
	start = 0;
	end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;

		temp = s;
	}
}
