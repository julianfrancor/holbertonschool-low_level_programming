#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: input is a parameter
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, iter;
	char q;

	i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	i--;
	if (i % 2 == 0)
	{
		iter = i;
	}
	else
	{
		iter = i + 1;
	}
	for (j = 0; j < iter; j++)
	{
		q = s[iter];
		s[iter] = s[j];
		s[j] = q;
	iter--;
	}
}
