#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that
 * allocates memory using malloc.
 * @b - unsigned int parametrer
 * Return - void
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc (sizeof(char) * b);
	if (!ptr)
	{
		exit (98);
	}
	return (ptr);
}
