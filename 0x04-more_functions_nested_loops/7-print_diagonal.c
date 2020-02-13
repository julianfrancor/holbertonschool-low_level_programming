#include "holberton.h"

/**
 * print_diagonal - function that draws a diagonal
 * line on the terminal.
 * @n: input
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (j = 1; j <= n; j++)
		{
			for (i = 1; i <= j; i++)
			{
				_putchar(' ');
			}
		_putchar(92);
		_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
