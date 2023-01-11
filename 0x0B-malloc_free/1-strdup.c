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

	s = malloc(sizeof(char) * 1);

	if (s == NULL)
	{
		return (NULL);
	}

	s = strdup(str);
	free(s);

	return (s);
}
