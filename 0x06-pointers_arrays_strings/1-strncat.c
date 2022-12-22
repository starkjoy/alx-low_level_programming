#include <stdio.h>
#include <string.h>

/**
 * _strncat - appends to existing string
 * Description: Adds text to other text
 * @dest: accepts string
 * @src: accepts string
 * @n: accepts integer values
 */

char *_strcat(char *dest, char *src, int n)
{
	char *result;

	result = strncat(dest, src, n);

	return (result);
}
