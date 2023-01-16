#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dogs
 * @d: accepts struct of dog_t
 * Return: void
 */

void free(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d->age);
	free(d);
}
