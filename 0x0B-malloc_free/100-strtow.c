#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - function that
 * splits a string into words.
 * @str: char
 * Return: char
 */

char **strtow(char *str)
{
	int i = 0, j = 0, words = 0, palabras = 0;
	char **array;

	if (str == NULL || str == "")
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
			words++;
		if (str[i] != ' ' && str[i+1] == ' ')
			palabras++;
	}
		printf("%d'\n'", palabras);
		printf("%d'\n'", words);
	array = malloc(sizeof(char*) * words + palabras + 1); 
	return (array);
}

