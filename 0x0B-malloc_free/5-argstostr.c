#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that
 * concatenates all the arguments of your program.
 * @ac: int
 * @av: array char
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int i, words, sizetotal, positionbreak;

	if (ac == 0 || av == '\0')
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
	string = (char *) malloc(sizeof(char) * sizetotal + ac + 1);
	if (!string)
		return (NULL);
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
