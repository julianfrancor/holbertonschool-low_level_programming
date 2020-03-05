#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - function that
 * allocates memory for an array, using malloc
 * @nmemb: int
 * @size: int
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size + 1);
	if (!ptr)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}
	ptr[i] = '\0';
	return (ptr);
}
