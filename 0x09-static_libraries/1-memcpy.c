#include <stdio.h>
#include <string.h>

/**
 * _memcpy - copies memory area
 * Description: Copies memory area
 * @dest: accepts char
 * @src: accepts char
 * @n: accepts int
 * Return: returns a pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ref = memcpy(dest, src, n);

	return (ref);
}
