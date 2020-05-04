#include "holberton.h"

/**
 * *_strncpy - function that copies a string.
 * @dest: input is array to be modified
 * @src: input is array source
 * @n: input
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int dest_len, i, m;

	m = n;

	/*finding the lenght of dest*/
	while (dest[dest_len] != 0)
	{
		dest_len++;
	}

	/*copying string from src to dest*/
	/*and adding the null at the end.*/

	for (i = 0 ; i < m && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < m; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
