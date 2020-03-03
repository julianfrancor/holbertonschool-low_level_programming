#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that
 * concatenates two strings.
 * @s1: char
 * @s2: char
 * Return: Null for fail or char for success
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i, j, k, q, size2;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	size2 = i + j;
	p = malloc(1 + sizeof(char) * size2);
	if (!p)
		return ('\0');
	k = 0;
	while (k < i)
	{
		p[k] = s1[k];
		k++;
	}
	q = 0;
	while (q <= j)
	{
		p[k] = s2[q];
		q++;
		k++;
	}
	return (p);
}
