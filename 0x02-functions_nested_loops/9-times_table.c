#include "holberton.h"
/**
 * times_table - function that prints the 9
 * times table, starting with 0
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
