#include "holberton.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: input is array
 * @s2: input is array
 * Return: char
 */

int _strcmp(char *s1, char *s2)
{
	int s2len, s1len, m;

	/*finding the lenght of s1*/
	s1len = 0;

	while (s1[s1len] != 0)
	{
		s1len++;
	}

	/*finding the lenght of s2*/
	s2len = 0;

	while (s2[s2len] != 0)
	{
		s2len++;
	}
	if (s1len < s2len)
	{
		m = -15;
	}
	else if (s1len == s2len)
	{
		m = 0;
	}
	else if (s1len > s2len)
	{
		m = 15;
	}

	return (m);
}
