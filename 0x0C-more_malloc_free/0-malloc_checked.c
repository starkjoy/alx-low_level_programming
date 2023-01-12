#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: accepts integer
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(unsigned int) * b);

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
