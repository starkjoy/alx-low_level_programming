#ifndef DOG_H
#define DOG_H

/**
 * struct dog - stores dog traits
 * @name: accepts string
 * @age: accepts float
 * @owner: accepts string
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
