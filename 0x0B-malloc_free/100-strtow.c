#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - function that
 * splits a string into words.
 * @str: char
 * Return: char
 */

char **strtow(char *str);
{
	int i = 0, j = 0;
	char *string;

	if (str == NULL || str == "")
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
			words++;
	}
	string = malloc(sizeof(char) * words + 1 + 
	for (j = 0; j > i; j++)
	{
		string[j] = 
