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

	i = j = k = q = size2 = 0;

	if (s1 == '\0')
	{
		s1 = "";
	}
	if (s2 == '\0')
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	size2 = i + j;
	p = (char *) malloc(1 + (sizeof(char) * size2));
	if (!p)
		return ('\0');
	for (k = 0; k < i; k++)
	{
		p[k] = s1[k];
	}
	for (q = 0; q <= j; q++)
	{
		p[k + q] = s2[q];
	}
	return (p);
}
