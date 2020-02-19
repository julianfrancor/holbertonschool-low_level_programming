#include "holberton.h"

/**
 * puts_half - function that prints
 * half of a string, followed by a new line.
 * The function should print the
 * second half of the string
 * @str: input is a parameter
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, n;

	i = 0;

	while (str[i] != 0)
	{
		i++;
	}

	if (!(i % 2 == 0))
	{
		n = ((i + 1) / 2);

		for (j = n; j <= i; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		n = i / 2;	
	for (j = n; j < i; j++)
	{
		_putchar(str[j]);
	}
	}
	_putchar('\n');
}
