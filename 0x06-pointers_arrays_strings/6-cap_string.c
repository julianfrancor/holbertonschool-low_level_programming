#include "holberton.h"

/**
 * *cap_string - function that capitalizes
 * all words of a string.
 * @s: input is array
 * Return: char
 */

char *cap_string(char *s)
{
	int i, j, k;
	char sep[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] >= 'a' && s[i] <= 'z' && s[i] != sep[j] && s[i - 1] == 32)
			{
				s[i] = s[i] - 32;
			}
			else if (s[i] >= 'a' && s[i] <= 'z' && s[i] != sep[j] && s[i - 1] == 46)
		{
			s[i] = s[i] - 32;
		}
		}
	}
	for (k = 0; k <= i; k++)
	{
		if (s[k] == '\t')
		{
			s[k] = 32;
		}
	}

	return (s);
}
