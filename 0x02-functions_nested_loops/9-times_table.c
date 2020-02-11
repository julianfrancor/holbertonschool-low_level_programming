#include "holberton.h"
/**
 * jack_bauer - function that prints every
 * minute of the day of Jack Bauer
 * starting from 00:00 to 23:59.
 * Return: void
 */

void times_table(void)
{
	int i, k;
	char f, w;

	for (k = 0; k <= 9; k++)
	{
		for (i = 0; i <= 9; i++)
		{
			f = ((i * k) / 10);
			w = ((i * k) % 10);
			if (f == 0)
			{
				if (!(i == 0))
				{
				_putchar(' ');
				}
				_putchar(w + '0');
				if (!(i == 9))
				{
				_putchar(',');
				_putchar(' ');
				}
			}
			else
			{
				_putchar(f + '0');
				_putchar(w + '0');
				if (!(i == 9))
				{
				_putchar(',');
				_putchar(' ');
				}
			}
		}
	_putchar('\n');
	}
}
