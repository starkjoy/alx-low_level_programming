#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create a char array
 * @size: accepts positive int
 * @c: accepts char
 * Return: char pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
