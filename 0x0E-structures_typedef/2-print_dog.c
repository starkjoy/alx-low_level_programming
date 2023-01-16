#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints struct dog
 * @d: accepts dog struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}

	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}

	printf("Name: %s\n", d->name);
	printf("Age: %0.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
