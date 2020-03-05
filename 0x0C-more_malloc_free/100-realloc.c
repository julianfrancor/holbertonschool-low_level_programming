#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - function that
 * function that creates an array of integers.
 * @ptr: void pointer
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p2, *aux;
	unsigned int i = 0;

	aux = ptr;

	if (new_size > old_size)
		p2 = malloc(new_size);
		for (i = 0; i < old_size; i++)
			p2[i] = aux[i];
		free(ptr);
		return (p2);
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p2 = malloc(new_size);
		for (i = 0; i < old_size; i++)
			p2[i] = aux[i];
		free(ptr);
		return (p2);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size > new_size)
	{
		p2 = malloc(new_size);
		for (i = 0; i < new_size; i++)
		free(ptr);
		return (p2);
	}
	free(ptr);

	return (p2);
}
