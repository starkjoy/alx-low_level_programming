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
	char *s;

	unsigned int size = strlen(str) + 1;

	s = malloc(sizeof(char) * size;

	if (s == NULL)
	{
		return (NULL);
	}

	s = strdup(str);

	free(s);

	return (s);
}
