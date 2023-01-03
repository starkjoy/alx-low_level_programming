#include <stdio.h>
#include <string.h>

/**
 * _strstr - Locates a substring
 * Description: locates a substring
 * @haystack: accepts char array
 * @needle: accepts char array
 * Return: returns a char array
 */

char *_strstr(char *haystack, char *needle)
{
	char *ref = strstr(haystack, needle);

	return (ref);
}
