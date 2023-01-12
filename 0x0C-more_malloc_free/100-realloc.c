#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *realloc - reallocates memory using malloc and free
 * @old_size: accepts positive int
 * @new_size: accepts positive int
 * @ptr: accepts pointer of any type
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	void *newp;

	ptr = malloc(old_size);

	if (ptr == NULL)
	{
		free(ptr);
		return (ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	newp = realloc(ptr, new_size);
	
	if(newp == NULL)
	{
		return (NULL);
	}
	return newp;
}
