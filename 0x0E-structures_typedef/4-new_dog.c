#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a dog_t type struct
 * @name: accepts string
 * @age: accepts float
 * @owner: accepts string
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		return (NULL);
	}

	ndog->name = malloc(strlen(name) + 1);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	strcpy(ndog->name, name);
	
	ndog->age = age;
	
	ndog-owner = malloc(strlen(owner) + 1);

	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);

		return (NULL);
	}
	strcpy(ndog->owner, owner);

	return (ndog);
}
