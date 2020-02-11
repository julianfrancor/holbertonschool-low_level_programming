#include "holberton.h"
/**
 * jack_bauer - function that prints every
 * minute of the day of Jack Bauer
 * starting from 00:00 to 23:59.
 * Return: void
 */

void jack_bauer(void)
{
	int i, j, q, k, f;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= f; j++)
		{
			if (i == 2)
			{
				f = 3;
			}
			else
			{
				f = 9;
			}
			for (q = 0; q <= 5; q++)
			{
				for (k = 0; k <= 9; k++)
				{
				_putchar(i + '0');
				_putchar(j + '0');
				_putchar(58);
				_putchar(q + '0');
				_putchar(k + '0');
				_putchar('\n');
				}
			}
		}
	}
}
