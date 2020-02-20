#include "holberton.h"

/**
 * *_strcat - function that concatenates two strings.
 * @dest: input is array to be modified
 * @src: input is array source
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k, n;
	/*finding the lenght of src*/
	while (src[i] != 0)
	{
		i++;
	}
	n = i - 1;
	/*finding the lenght of dest*/
	while (dest[j] != 0)
	{
		j++;
	}

	/*concatenating the two strings, I'm pasting src at the*/
	/*end of dest.*/
	for (k = 0 ; k <= n && src[k] != '\0' ; k++)
	{
		dest[j + k] = src[k];
	}

	dest[j + k] = '\0';

	return (dest);
}
