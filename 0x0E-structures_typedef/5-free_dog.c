#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function that
 * prints a struct dog
 * @d: pointer pointing to the struct dog
 * Return - Void
 */

void free_dog(dog_t *d)
{
	free ((*d).name);
	free ((*d).owner);
	free (d);
}
