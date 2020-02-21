#include "holberton.h"

/**
 * *cap_string - function that capitalizes
 * all words of a string.
 * @s: input is array
 * Return: char
 */

char *cap_string(char *s)
{
	int i, j;
	char sep[13] = {' ', ',', ';', '\t', '\n', '.',
			'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if ((s[i] < 'a' || s[i] > 'z') && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			{
				if (s[i] == sep[j])
					s[i + 1] -= 32;
			}
			else if (i == 0 && (s[i] >= 'a' && s[i + 1] <= 'z'))
			{
				s[i] -= 32;
			}
		}
	}
	return (s);
}
