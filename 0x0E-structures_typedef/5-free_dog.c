#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - function that
 * frees the dogs
 * @d: pointer type dog_t
 * Return: Void
 */

void free_dog(dog_t *d)
{
	free((*d).name);
	free((*d).owner);
	free(d);
}
