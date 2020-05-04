#include "holberton.h"

/**
 * _strpbrk - function that
 * searches a string for any of a set of bytes.
 * @s: string is char
 * @accept: substring is char to compare
 * Return: unsigned int
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	if (s[i] == 0)
	{
		return ('\0');
	}
	return (&s[i]);
}
