#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

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

/**
 * new_dog - function that
 * creates a new dog.
 * @name: pointer type char
 * @age: variable foat type
 * @owner: pointer type char
 * Return: return pointer type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *perroMueco = malloc(sizeof(dog_t));

	if (perroMueco == NULL)
		return (NULL);

	(*perroMueco).age = age;

	(*perroMueco).name = _strdup(name);
	if (name == NULL)
	{
		free(perroMueco);
		return (NULL);
	}
	(*perroMueco).owner = _strdup(owner);
	if (owner == NULL)
	{
		free((*perroMueco).name);
		free(perroMueco);
		return (NULL);
	}
	return (perroMueco);
}
