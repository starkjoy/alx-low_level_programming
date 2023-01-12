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
	unsigned int min_size;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	newp = malloc(new_size);

	if (newp == NULL)
	{
		return (NULL);
	}
	if (new_size < old_size)
	{
		min_size = new_size;
	}
	else
	{
		min_size = old_size;
	}
	memcpy(newp, ptr, min_size);

	free(ptr);

	return (newp);
}
