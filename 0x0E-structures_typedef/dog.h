#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure to define elements
 * @name: is a pointer of type char
 * @age: is a variable float
 * @owner: is a pointer char
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
