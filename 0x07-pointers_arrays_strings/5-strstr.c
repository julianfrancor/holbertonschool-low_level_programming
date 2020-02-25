#include "holberton.h"

/**
 * _strstr - function that
 * locates a substring.
 * @haystack: string is char
 * @needle: substring is char to compare
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				/*here we are comparing the not maching*/
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}
			/*if needle is null return haystack position i*/
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}
	/*if the value of needle is null return the position*/
	/*of haystack in cero, return the whole string*/
	if (needle[j] == '\0')
	{
		return (&haystack[0]);
	}
	return ('\0');
}
