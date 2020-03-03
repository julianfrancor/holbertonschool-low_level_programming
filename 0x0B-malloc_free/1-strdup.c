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
	unsigned int i;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	p = (char *) malloc(sizeof(str) * i);

	j = 0;
	while (str[j] != '\0')
	{
		p[j] = str[j];
		j++;
	}
	if (sizeof(p) < sizeof(str))
		return (NULL);
	return (p);
}
