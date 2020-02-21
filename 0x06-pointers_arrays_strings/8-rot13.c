#include "holberton.h"

/**
 * *rot13 - function that encodes a
 * string using rot13.
 * @s: input is array
 * Return: char
 */

char *rot13(char *s)
{
	char a1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char a2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int j, i = 0;

	/*with this while we travel along the input array*/
	while (s[i] != 0)
	{
	/*
	 * with this for we gonna compare the content of
	 * the array s and a1
	 */
		for (j = 0; a1[j] != 0; j++)
		{
			/*
			 * with this if we gonna over-write the
			 * content of the array s
			 */
			if (s[i] == a1[j])
			{
				s[i] = a2[j];
			/*
			 * the break has to be inside the if
			 * because if the program finds a character
			 * in s that is equal in a1 it will change it
			 * with a value of array a2 and then will break
			 * the for, if we place this break out of the for
			 * we gonna stop that for always and we'll end-up not
			 * doing anything.
			 */
				break;
			}

		}
	i++;
	}
	return (s);
}
