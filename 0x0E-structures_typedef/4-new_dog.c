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
	if (newdog == NULL)
		return (NULL);
	
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	return (newdog);
}
