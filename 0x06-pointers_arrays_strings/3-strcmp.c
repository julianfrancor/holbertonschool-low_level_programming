#include "holberton.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: input is array
 * @s2: input is array
 * Return: char
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;
	i = 0;

	while(s1[i] != 0 || s2[i] != 0)
	{
		j = s1[i] - s2[i];
		if (j != 0)
		{
			return (j);	
		}
	i++;
	}
	return (j);
}
