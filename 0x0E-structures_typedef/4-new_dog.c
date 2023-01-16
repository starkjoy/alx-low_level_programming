#include "dog.h"
#include <stdio.h>

/**
 * new_dog - creates a dog_t type struct
 * @name: accepts string
 * @age: accepts float
 * @owner: accepts string
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndogs;

	if (ndogs == NULL)
		return (NULL);
	
	ndogs->name = name;
	ndogs->age = age;
	ndogs->owner = owner;

	return (ndogs);
}
