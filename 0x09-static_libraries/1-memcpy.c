#include "holberton.h"

/**
 * _memcpy - function that
 * copies memory area.
 * @dest: pointer is char
 * @src: variable is char
 * @n: variable is unsigned int
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
