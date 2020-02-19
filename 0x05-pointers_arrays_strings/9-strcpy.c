#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - function that copies the
 * string pointed to by src, including the
 * terminating null byte (\0)
 * to the buffer pointed to by dest.
 * Return value: the pointer to dest
 * @dest: input is array
 * @src: input is array
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int j, i = 0;

	while (src[i] != 0)
	{
		i++;
	}
	for (j = 0; j < i && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
