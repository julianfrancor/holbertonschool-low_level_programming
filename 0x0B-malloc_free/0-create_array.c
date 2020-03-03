#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that
 * creates an array of chars, and
 * initializes it with a specific char.
 * @size: unsigned int and lenght of array
 * @c: char and parameter to initialize the array
 * Return: Null for fail or char for success
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	p = (char *) malloc(sizeof(char) * size);

	if (!p)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
