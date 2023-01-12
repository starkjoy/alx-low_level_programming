#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: accepts integer
 * @size: accepts int
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size);
{
	void *ptr;
	unsigned int width;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	width = size * nmemb;

	ptr = malloc(width);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		memset(ptr, 0, width);
		return (ptr);
}
