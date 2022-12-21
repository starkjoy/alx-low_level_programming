#include <stdio.h>
#include <string.h>

/**
 * _strcat - appends to existing string
 * Description: Adds text to other text
 * @dest: accepts string
 * @src: accepts string
 */

char *_strcat(char *dest, char *src)
{
	char *result;

	result = strcat(dest, src);

	return (*result);
}
