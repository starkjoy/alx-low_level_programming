#include "dog.h"
#include <stdio.h>

/**
 * new_dog - initializes a variable
 * @name: accepts string
 * @age: accepts float
 * @owner: accepts string
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *ndogs
	{
		ndogs->name = name;
		ndogs->age = age;
		ndogs->owner = owner;
	};

	if (ndogs == NULL)
		return (NULL);

	return (ndogs);
}
