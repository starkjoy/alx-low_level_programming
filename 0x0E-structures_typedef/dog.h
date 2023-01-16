#ifndef DOG_H
#define DOG_H

/**
 * struct dog - stores dog traits
 * @name: accepts string
 * @age: accepts float
 * @owner: accepts string
 * Description: Data Structure for dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
