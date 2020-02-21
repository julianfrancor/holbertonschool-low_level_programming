#include "holberton.h"

/**
 * *leet - function that encodes a
 * string into 1337.
 * @s: input is array
 * Return: char
 */

char *leet(char *s)
{ 
	char a1[10] = "aAeEoOtTlL";
	char a2[10] = "4433007711";
	int j, i = 0;

	while (s[i] != 0)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a1[j])
			{
				s[i] = a2[j];
			}
		}
	i++;
	}
	return (s);
}
