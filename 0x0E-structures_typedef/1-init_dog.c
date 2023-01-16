#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a variable
 * @d: accepts dog struct
 * @name: accepts string
 * @age: accepts float
 * @owner: accepts string
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age =  age;
	d->owner = owner;
}
