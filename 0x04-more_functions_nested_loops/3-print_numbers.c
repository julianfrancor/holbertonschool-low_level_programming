#include "holberton.h"

/**
 * print_numbers - function that prints the
 * numbers, from 0 to 9, followed by a new line.
 * input is void
 * Return: void
 */

void print_numbers(void)
{
	char i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
