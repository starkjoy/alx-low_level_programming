#include <stdio.h>
#include <stdlib.h>

/**
 * create_array: create a char array
 * @size: accepts positive int
 * @c: accepts char
 * Return: char pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;
	
	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (printf("failed to allocate memory\n"));
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
