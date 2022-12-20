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

	while (s[l] != '\0')
	{
		l++;
	}
	for (l -= 1; l >= 0; l--)
	{
		char string = s[l];
	}
}
