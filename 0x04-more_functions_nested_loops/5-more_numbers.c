#include "holberton.h"

/**
 * more_numbers - function that prints 10 times the numbers
 * from 0 to 14, followed by a new line.
 * input is void
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;
	char s, q;

	for (j = 1; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			s = i / 10;
			q = i % 10;
			if (i > 9)
			{
			_putchar(s + '0');
			}
			_putchar(q + '0');
		}
	_putchar('\n');
	}
}
