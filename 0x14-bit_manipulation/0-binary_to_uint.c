#include "holberton.h"

/**
 * _strlen - function that
 * returns the length of a string.
 * @s: input is a parameter
 * Return: void
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != 0)
	{
	i++;
	}
	return (i);
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: Unsigned int or 0 (if there is one or more chars in the
 * string b that is not 0 or 1; or if b is NULL).
 */
unsigned int binary_to_uint(const char *b)
{
	char *ptr;
	int len_binary = 0, i = 0;
	unsigned int nunsignd_int = 0, base = 1;

	
	if (b == NULL)
		return (0);

	ptr = (char *)b;
	len_binary = _strlen(ptr);

	i = len_binary - 1;
	while (i >= 0)
	{
		if (ptr[i] != '1' && ptr[i] != '0')
			return (0);
		if (ptr[i] == '1')
		{
			nunsignd_int += base;
		}
		base = base * 2;
		i--;
	}
	return (nunsignd_int);
}
