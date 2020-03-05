#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function that
 * concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: unsigned int parameter
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len2 = 0, w = 0, k = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
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
	if (j > n)
		len2 = n;
	else
		len2 = j;

	ptr = malloc(1 + sizeof(char) * (i + len2));
	if (!ptr)
		return (NULL);
	for (w = 0; w < i ; w++)
	{
		ptr[w] = s1[w];
	}
	for (k = 0; k < len2; k++)
	{
		ptr[w + k] = s2[k];
	}
	ptr[w + k] = '\0';
	return (ptr);
}
