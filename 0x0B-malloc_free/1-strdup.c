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

	ptr = strdup(str);

	ptr = malloc(sizeof(char) * sizeof(str));

	if (ptr == NULL)
	{
		return (NULL);
	}

	free(ptr);

	return (ptr);
}
