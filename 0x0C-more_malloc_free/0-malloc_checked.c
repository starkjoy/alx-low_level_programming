#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: accepts integer
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
