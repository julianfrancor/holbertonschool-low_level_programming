#include "holberton.h"

/**
 * *leet - function that encodes a
 * string into 1337.
 * @s: input is array
 * Return: char
 */

char *rot13(char *s)
{
	char a1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char a2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int j, i = 0;

	while (s[i] != 0)
	{
		for (j = 0; a1[j] != 0; j++)
		{
			if (s[i] == a1[j])
			{
				s[i] = a2[j];
				break;
			}

		}
	i++;
	}
	return (s);
}
