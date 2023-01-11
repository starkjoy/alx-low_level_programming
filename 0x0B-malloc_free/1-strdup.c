#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strdup - create a char array
 * @str: accepts positive int
 * Return: char pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	char *s;

	s = *str;

	ptr = strdup(s);

	ptr = malloc(sizeof(char) * 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	free(ptr);

	return (ptr);
}
