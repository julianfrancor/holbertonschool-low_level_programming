#include "dog.h"

/**
 * init_dog - function that
 * initialize a variable of type struct dog
 * @d: pointer pointing to the struct dog
 * @name: pointer type char
 * @age: float variable
 * @owner: pointer type char
 * Return - Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	d->age = age;
	d->owner = owner;
	
	return;
}
