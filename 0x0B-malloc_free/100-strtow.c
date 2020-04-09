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
	int i = 0, j = 0, words = 0, letters = 0, k = 0, q = 0;
	char **array;

	if (str == NULL || str[0] == 0)
		return (NULL);
/*PRIMERO: MALLOC A LOS PUNTEROS how many words we have in that full string*/
	for (i = 0; str[i]; i++)
	{
		/*counting the number of words in the str*/
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words++;
	}
	if (words == 0)
		return (0);
	/*Allocating space for the words we have and one space null at the end*/
	array = malloc(sizeof(char *) * words + 1);
	if (!array)
		return (0);
/*SEGUNDO: MALLOC A LETRAS EN DE CADA PUNTERO, letters we have on each word*/
	for (i = 0; str[i] && k < words; i++)
	{
		if (str[i] != ' ')
		{
			/*finding the space for each string*/
			j = i;
			letters = 0;
			while (str[j] != ' ' && str[j] != '\0')
			{
				letters++;
				j++;
			}
			/*Allocating space for the number of letter within each word*/
			array[k] = malloc(sizeof(char) * (letters + 1));
			if (!array[k])
			{
				for (k = k - 1; k >= 0; k++)
					free(array[k]);
				free(array);
				return (0);
			}
			/*initializing the matriz with str.*/
			for (q = 0; q < letters; q++, i++)
				array[k][q] = str[i];
			array[k++][q] = '\0';
		}
	}
	array[k] = '\0';
	return (array);
}
