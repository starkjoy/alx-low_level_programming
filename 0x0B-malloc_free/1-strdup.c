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

	ptr = malloc(sizeof(char*));

	if (str == NULL)
	{
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{

		ptr = strdup(str);
		ptr[0] = '\0';
		return (ptr);
	}

	free(ptr);
}
