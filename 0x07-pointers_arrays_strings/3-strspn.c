#include "holberton.h"

/**
 * _strspn - function that
 * gets the length of a prefix substring.
 * @s: string is char
 * @accept: substring is char to compare
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, cont = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			break;
		j = 0;
		while (accept[j] != 0)
		{
			if (s[i] == accept[j])
			{
				cont++;
			}
		j++;
		}
	}
	return (cont);
}
