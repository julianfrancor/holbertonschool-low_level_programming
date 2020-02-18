#include "holberton.h"

/**
 * puts2 - function that prints
 * every other character of a string,
 * starting with the first character,
 * followed by a new line
 * @str: input is a parameter
 * Return: void
 */

void puts2(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != 0)
	{
		i++;
	}
	
	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
