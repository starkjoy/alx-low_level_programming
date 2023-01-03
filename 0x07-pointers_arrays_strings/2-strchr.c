#include <stdio.h>
#include <string.h>

/**
 * _strchr - locates a character in a string
 * Description: locates a character in a string
 * @s: accepts char array
 * @c: accepts char
 * Return: returns a pointer
 */

char *_strchr(char *s, char c)
{
	char *ref = strchr(s, c);

	return (ref);
}
