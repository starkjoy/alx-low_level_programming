#include <stdio.h>
#include <string.h>

/**
 * palrec - checks for palindrome
 * Description: checks for palindrome
 * @s: acceps array
 * @l: left integer
 * @r: right integer
 * Return: integer
 */

int palrec(char *s, int l, int r)
{
	if (l >= r)
	{
		return (1);
	}

	if (s[l] != s[r])
	{
		return (0);
	}

	return (palrec(s, l + 1, r - 1));
}

/**
 * is_palindrome - returns 1 if a string is palindrome and 0 for the inverse
 * Description: returns 1 if string is palindrome and 0 for the opposite
 * @s: accepts an array
 * Return: returns an integer
 */

int is_palindrome(char *s)
{
	return (palrec(s, 0, strlen(s) - 1));
}
