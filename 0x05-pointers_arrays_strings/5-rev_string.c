#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: input is a parameter
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	char q;

	i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++)
	{
		q = s[i];
		s[i] = s[j];
		s[j] = q;
	i--;
	}
}
