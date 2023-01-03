#include <stdio.h>
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * Description: Fills memory with constant byte
 * @s: accepts char
 * @b: accepts char
 * @n: accepts int
 * Return: returns a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ref = memset(s, b, n);

	return (ref);
}
