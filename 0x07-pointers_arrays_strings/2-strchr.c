#include "holberton.h"

/**
 * _strchr - function that
 * locates a character in a string.
 * @s: pointer is char
 * @c: variable is char
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int len, i;

	len = 0;

	/*finding the lenght of the string*/
	while (s[len] != '\0')
	{
		len++;
	}
	/*finding the position of c in *s */
	for (i = 0; i <= len; i++)
	{
		if (s[i] == c)
		{
			s = &s[i];
			break;
		}
		else if (s[i] == 0)
		{
			s = '\0';
		}
	}
	return (s);
}
