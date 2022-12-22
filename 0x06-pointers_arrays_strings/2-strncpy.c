#include <stdio.h>
#include <string.h>

/**
 * _strncpy - appends to existing string
 * Description: Adds text to other text
 * @dest: accepts string
 * @src: accepts string
 * @n: accepts integer values
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *result;

	result = strncpy(dest, src, n);

	return (*result);
}
