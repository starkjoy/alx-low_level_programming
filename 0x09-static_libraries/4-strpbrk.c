#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - Searches for string for any of a set of bytes
 * Description: searches for string of specified bytes
 * @s: accepts char array
 * @accept: accepts char array
 * Return: returns a char array
 */

char *_strpbrk(char *s, char *accept)
{
	char *ref = strpbrk(s, accept);

	return (ref);
}
