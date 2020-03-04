#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that
 * concatenates all the arguments of your program.
 * @ac: int
 * @av: array char
 * Return: pointer 
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int i, words, sizetotal, positionbreak;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		words = 0;
		while (av[i][words] != '\0')
		{
			words++;
			sizetotal++;
		}
	}
	string =  malloc(sizeof(char) * (sizetotal + ac + 1));
	if (string == NULL)
		return (NULL);
	positionbreak = 0;
	for (i = 0; i < ac; i++)
	{
		words = 0;
		while (av[i][words] != '\0')
		{
			string[positionbreak] = av[i][words];
			words++;
			positionbreak++;
		}
		string[positionbreak] = '\n';
		positionbreak++;
	}
	string[positionbreak] = '\0';
	return (string);
}
