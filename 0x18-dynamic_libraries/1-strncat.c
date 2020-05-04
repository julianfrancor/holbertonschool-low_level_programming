#include "holberton.h"

/**
 * *_strncat - function that concatenates two strings.
 * @dest: input is array to be modified
 * @src: input is array source
 * @n: input
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int strlen, dest_len, i, m;
	/*finding the lenght of src*/
	while (src[strlen] != 0)
	{
		strlen++;
	}

	/*finding the lenght of dest*/
	while (dest[dest_len] != 0)
	{
		dest_len++;
	}
	m = n;
	/*concatenating the two strings, I'm pasting src at the*/
	/*end of dest.*/
	for (i = 0 ; i < m && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
