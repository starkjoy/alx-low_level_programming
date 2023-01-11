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

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * (strlen(str) + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{

		ptr = strdup(str);

		return (ptr);
	}

	free(ptr);
}
