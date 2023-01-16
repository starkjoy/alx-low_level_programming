#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dogs
 * @d: accepts struct of dog_t
 * Return: void
 */

void free(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
} 
