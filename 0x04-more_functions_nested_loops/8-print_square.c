#include "holberton.h"

/**
 * print_square - function that prints a square,
 * followed by a new line.
 * @size: input
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
	for (j = 1; j <= size; j++) 
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
