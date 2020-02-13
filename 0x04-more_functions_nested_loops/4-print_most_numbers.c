#include "holberton.h"

/**
 * print_most_numbers - function that prints the
 * numbers, from 0 to 9, followed by a new line.
 * do not print 2 and 4.
 * input is void
 * Return: void
 */

void print_most_numbers(void)
{
	char i;

	for (i = 0; i <= 9; i++)
	{
		if (!(i == 2) && !(i == 4))
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
