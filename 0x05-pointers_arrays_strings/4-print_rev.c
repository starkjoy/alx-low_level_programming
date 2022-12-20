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

	length = strlen(s);
	start = 0;
	end = length - 1;

	while (start < end)
	{
		char temp;

		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
	return (s);
}
