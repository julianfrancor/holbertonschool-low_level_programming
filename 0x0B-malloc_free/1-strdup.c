#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that
 * returns a pointer to a newly allocated
 * space in memory, which contains a copy
 * of the string given as a parameter.
 * @str: char
 * Return: Null for fail or char for success
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	p = (char *) malloc(1 + sizeof(char) * i);

	if (!p)
		return (NULL);

	j = 0;
	while (j <= i)
	{
		p[j] = str[j];
		j++;
	}
	return (p);
}
