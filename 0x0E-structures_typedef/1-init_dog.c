#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a variable
 * @d: accepts struct of dog
 * @name: accepts string
 * @age: accepts float
 * @owner: accepts string
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
