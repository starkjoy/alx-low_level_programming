#include <stdio.h>
#include "dog.h"

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
	d.name = "Kin";
	d.age = 5.6;
	d.owner = "Joy";
}