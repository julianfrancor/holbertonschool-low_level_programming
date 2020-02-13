#include "holberton.h"

/**
 * print_triangle - function that prints a triangle,
 * followed by a new line.
 * @size: input
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k, q;

	if (size > 0)
	{
	for (j = 0; j < size; j++)
	{
		q = (size - j - 1);

		for (i = q; i > 0; --i)
		{
			_putchar(' ');
		}
		for (k = 0; k <= j; k++)
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
